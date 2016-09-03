//CODE BY VINÍCIUS JEAN FERREIRA
//EASILY AND CLEAN SYSTEM TO SEND FLOATING POINT VARIABLES TO LABVIEW VIA WI-FI
//NOTE THAT THIS IS A SIMPLE CODE AND CAN BE EASILY MODIFIED
//USE FOR YOU PROJECTS AND CONTACT ME FOR ANY DOUBT: Shout.and.Hawks@hotmail.com

#define DEBUG true

float x = 10.5, y = 11.7;

void setup() 
{
  Serial.begin(115200); //CAUTION: IF YOU ARE GOING TO USE LOWER BAUD RATES, REMEMBER TO INCREASES THE TIMEOUT ON THE SENDDATA FUCNCTION

  sendData("AT+RST\r\n", 3000, DEBUG);
  sendData("AT+CWJAP=\"Your_SSID\",\"password\"\r\n", 3500, DEBUG);
  sendData("AT+CWMODE=1\r\n", 3500, DEBUG);
  sendData("AT+CIPMUX=0\r\n", 3500, DEBUG);
  sendData("AT+CIPSTART=\"UDP\",\"255.255.255.255\",61557\r\n", 3500, DEBUG);
}

//Run until socialism works
void loop() 
{
  String coordenadas = "";
  coordenadas += x;
  coordenadas += " ";
  coordenadas += y;
 
  String cipSend = "AT+CIPSEND=";
  cipSend += coordenadas.length();
  cipSend += "\r\n";
 
  sendData(cipSend, 3, DEBUG);
  sendData(coordenadas, 3, DEBUG); 

  delay(100);
}

//Function to send data to ESP
void sendData(String command, const int timeout, boolean debug)
{
  // Envio dos comandos AT para o modulo
  String response = "";
  Serial.print(command);
  long int time = millis();
  while ( (time + timeout) > millis())
  {
  }
}
