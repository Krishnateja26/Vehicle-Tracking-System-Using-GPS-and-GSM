# Vehicle-Tracking-System-Using-GPS-and-GSM

The location tracking system is the combination of the Global Positioning System (GPS) and the Global System Mobile communication (GSM) technologies via the microcontroller. It is used to detect the GPS location of vehicles or any objects which are attached to a tracking device. The proposed system made good use of popular technology that combines a smartphone with an Arduino UNO. GPS is a satellite-based navigation technology that provides accurate location and information. The GSM module is used to transmit and receive an update from the object location to a database. Data from the numerous satellites are received by GPS receiver in the National Marine Electronics Association (NMEA) protocol form. The system SMS contains latitude and longitude of the location of the object. The NMEA code consists of a combination of information. Arduino is linked to the GPS and the GSM module in the serial connection. The GPS receiver sends data to Arduino. Then, Arduino instructs the GSM module to send the location data to the GSM enable device in a short message form. Thus, by using the tracking system, it is easy to calculate and get the estimate location and time for the vehicle to reach a given destination.

## EQUIPMENTS REQUIRED

Arduino UNO R3, SIM800C GSM module, GPS NEO 6M module, LCD 16 X 2 I2C module, Adapter, Jumper wires.

## Overview

Arduino Uno training board, GPS receiver and GSM SIM 900A module are used as major hardware and basic C programming language is used for hardware description language to build small digital circuit. First, the sketch is uploaded into the Arduino programmable microcontroller board. After that GPS receiver tracks the satellite data and sends the Arduino Uno. And then, Arduino sends its data to the GSM module to SIM card number recommended by user. Under these circumstances, one can know the location where vehicles or moving objects have arrived as the short message from in the specified android mobile phone.

Arduino is an open-source electronics prototype platform based on hardware and software. The link can be established between the real world and the virtual world by connecting with Arduino to the Internet, either sending data to the Internet or responding to data on the Internet, or both. It can be to sense almost anything using the sensors for including light, temperature, pressure and sound. Arduino react depends on how program to be implemented. Arduino is a very popular and easy to use programmable board for creating our own projects

Arduino projects can be stand-alone or they can be connected to a computer using USB. Arduino microcontroller is responsible for controlling and interfacing between GPS module and GSM receiver. Arduino can sense the environment by receiving input from a variety of sensors and can display and monitor the sensor data. The Serial Monitor is part of the Arduino IDE software. Its job is to allow both send messages from computer to an Arduino board (over USB) and also to receive messages from the Arduino.

The Global Positioning System (GPS) is a satellite-based navigation system that sends data from satellites. Orbiting Earth to GPS receivers on the ground that can use that data to determine position and the current time anywhere on Earth. GPS module is used to determine position, time and speed. It measures the exact distance with few more satellites and the receivers determine the position of the user and displays it on the map of the electronic appliance. By using four or more satellites, the receivers can determine the three-dimensional position of the user which consists of altitude, latitude and longitude. GPS module sends the data related to tracking position in real time, and it sends so many data in NMEA format. In this paper, our study the concept of the GSM modules that is used a variation of time division multiple access (TDM) and is the most widely used of the three digital wireless telephony technologies TDMA, GSM and CDMA. GSM is the most widely used cell phone technology in the context of GSM phones and GSM network. GSM network providers put customer information on a removable SIM card.
There are three main parts. Firstly, the GPS shield is connected easy to Arduino Uno. GPS Rx (receive) is connected to the Arduino Uno Tx (transmit) and GPS Tx (transmit) Is connected to the Arduino Uno Rx (receive). This is because the Uno (Tx) D11 transmits to the GPS (Rx) and conversely the Uno (Rx) D12 receives from the GPS (Tx). GPS GND&VCC is connected to GND&5V of the Arduino UNO R3. GSM Rx (receive) is connected to the Arduino Uno D9 (transmit) and GSM Tx (transmit) is connected to the Arduino Uno D10 (receive). This is because the Uno (Tx) D1 transmits to the GPS (Rx) and conversely the Uno (Rx) D0 receives from the GPS (Tx) shown in figures. GSM GND&12V (power supply) is connected to the GND&VIN of the arduino UNO R3. The SCL, SDA, VCC, GND of LCD are connected to SCL, SDA, 5V, GND of Arduino UNO R3 as shown in figure below.

## ADVANTAGES

Commercial fleet operators are by far the largest users of vehicle tracking systems. These systems are used for operational functions such as routing, security, dispatch and collecting on-board information. These are also used for fire detector in large vehicles like train, bus etc. Because the vehicle like train contains large number of people and the sending alert of fire accident can save many lives. The applications for this project are in military, navigation, automobiles, aircrafts, fleet management, remote monitoring, remote control, security systems, tele services, etc.

Fleet monitoring

Vehicle scheduling

Route monitoring

Driver monitoring

Accident analysis

Geo-fencing geo-coding.

8. CONCLUSION

An Android based GPS and GSM integration for vehicle and another objects tracking can be useful instead of using GPS network alone. Tracking system is nowadays the most important system for the people because of our objects is secure. They want their own things security in safe hands this is the main reason. This system is completely integrated and it provides GPS coordinate to a mobile phone where these coordinates are mapped on a Google map. GSM module used in this paper to send and receive messages and can also interfaced with Arduino when using AT command. It can be further extended for multiple applications such as Anti-theft system for cars and bites, managing of public transports likes buses, train and fish boats, and many more similar applications thus, this system can proof to be very helpful in future.

Vehicle tracking system makes better fleet management and which in turn brings large profits. Better scheduling or route planning can enable you handle larger jobs loads within a particular time. Vehicle tracking both in case of personal as well as business purpose improves safety and security, communication medium, performance monitor in gand increases productivity. So in the coming year, it is going to play a major role in our day-to-day living. Main motto of the project is to incorporate different types of sensors so that they help in decrease the chances of losing life in such accident which we can't stop from occurring. Whenever accident is alerted the paramedics are reached to the particular location to increase the chances of life.

DELL

+

X

This device invention is much more useful for the accidents occurred in deserted places and midnights. This vehicle tracking and accident alert feature plays much more important role in day to day life in future.
