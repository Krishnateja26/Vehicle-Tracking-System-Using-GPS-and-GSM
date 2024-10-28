Upload the code into Arduino UNO R3 through cable (By removing the RX, TX connections).

#include <Wire.h>

#include <LiquidCrystal_I2C.h>

#include <SoftwareSerial.h>

#include <TinyGPS.h>

#include "I2Cdev.h"


LiquidCrystal_I2CIcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

String CellNumtemp;
String CellNum;
String textMessage;

int save=0, stp=0;

//long lat, lon;
// create variable for latitude and longitude object

float lat = 28.5458,lon = 77.1703; // create variable for latitude and longitude object SoftwareSerial gpsSerial (4,3);//rx,tx

//SoftwareSerial gsm (9,10);
TinyGPS gps; //create gps object

void setup(){

Serial.begin(9600); //connect serial 
delay(100);
  Serial.print("AT+CMGF=1\r");
Serial.print("AT");
delay(100);

// Set module to send SMS data to serial out upon receipt

Serial.print("AT+CNMI=2,2,0,0,0\r");

Serial.println("AT+CMGD=1,4");

gpsSerial.begin(9600); // connect gps sensor

Icd.begin(16,2);
Icd.backlight();
  Icd.setCursor(0,0);
  Icd.print("Vehicle Tracking");
  Icd.setCursor(0,1);
  Icd.print("Using GSM/GPS");
  delay(3000);
  Icd.clear();
  while(!Serial){
  Icd.setCursor(0,0);
  Icd.print("Waiting for Serial");
  Icd.setCursor(0,1);
  Icd.print(" Network");
  }

}

void loop(){
  Icd.setCursor(0,0);
  Icd.print("Network Available");
  Icd.setCursor(0,1);
  Icd.print("send MSG to SIM");

if (Serial.available()>0)

//Serial.write(Serial.read());
  textMessage = Serial.readString();

//Serial.print(textMessage);

if(textMessage.indexOf("CMT")>=0){
  save =1;
    CellNumtemp =textMessage.substring(textMessage.indexOf("+91"));
    CellNum = CellNumtemp.substring(0,13);
    Serial.println(CellNum);
  Icd.clear();
  Icd.setCursor(0,0);
  Icd.print(CellNum);
  Icd.setCursor(0,1);
  Icd.print("Number Saved");
  delay(5000);
  //sending sms to saved number;
  Serial.println("AT+CMGF=1"); //Sets the Serial Module in Text Mode
  delay(1000); // Delay of 1000 milli seconds or 1 second
  Serial.print("AT+CMGS=\"");
  Serial.print(CellNum);
  Serial.print("\"\r");
  delay(1000);
  Serial.println("Number Saved for Vehicle tracking");// The SMS text you want to send
  delay(100);
  Serial.println((char)26);// ASCII code of CTRL+Z
  delay(1000);
//Serial.println("Activated");

CellNumtemp = "";
TextMessage = "";
Lcd.clear();
Lcd.setCursor(0,0);
Lcd.print ("Waiting for GPS");
Delay (100);
}

while(save==1) {

while(gpsSerial.available()) { // check for gps data

if(gps.encode(gpsSerial.read()))// encode gps data 
{ lcd.clear();

Gps.f_get_position(&lat, &lon); // get latitude and longitude

// display position

Lcd.clear();

Lcd.setCursor(0,0);

Lcd.print("GPS:");

Lcd.print(lat);

Lcd.print(", ");

Lcd.print(lon);

if(textMessage.indexOf("CMT")>=0){
  Icd.setCursor(0,1);
  Icd.print("Alert Msg Sent");
  Serial.println("AT+CMGF=1"); //Sets the Serial Module in Text Mode
  delay(1000); // Delay of 1000 milli seconds or 1 second
  Serial.print("AT+CMGS=\""");
  Serial.print(CellNum);
  Serial.print("\"\r");
  delay(1000);
  Serial.print("Vehicle Position Occured at GPS: ");// The SMS text you want to send
  Serial.print("http://maps.google.com/maps?&z=15&mrt=yp&t=k&q=");
  Serial.print(lat,6);
  Serial.print("+"); //28.612953, 77.231545 //28.612953,77.2293563
  Serial.println(lon,6);
  delay(100);
  Serial.println((char)26);// ASCII code of CTRL+Z
  delay(1000);
  Icd.clear();
  stp=1;
  while(stp==1){
    //loop
    Icd.setCursor(0,0);
    Icd.print("Alert Msg Sent");
    delay(500);
    stp=0;
  }
  /*
  Icd.print(valax);
  Icd.print(" ");
  Icd.print(valay); */

}

else{
  /* Icd.setCursor(0,1);
  Icd.print("Safe ");
  Icd.print(valax);
  Icd.print(" ");
  Icd.print(valay); */
}
delay(500);
}
}
}

/*String latitude = String(lat,6);
  String longitude = String(lon,6);
  Serial.println(latitude+";"+longitude);
  delay(10);*/

}
