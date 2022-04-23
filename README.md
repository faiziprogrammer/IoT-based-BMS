# Towards Intlligent Remote Building Management System
## The goal of this project is to make an Artifficialy Intelligent Building Management System that monitors and manages parameters like Temperature, Humidity, Presuure, Power Consumption of Devices and Controls Actuators, Lighting etc through Mobile Application/Website, using IoT Technology and Machine Learning.
As this project is huge, we are currently focusing on implementing a Water Management System, that provides real-time monitoring of Flow Rate, Pump Power Consumption, and Water Level. Along with this, we are also working on basic building management like Monitoring Humidity, and Temperature of a room and Automating Control of Lights and Fans/Air Conditioning. 
### Motivation
The purpose of technology is to make our lives comfortable. It is important to decrease waste of energy and resources as well as operation cost without compromising the user’s comfort. Hence, our aim is to create a system that focuses on comfort, usability, security and management. The popularity of Internet of Things and emergence of omnipresent sensors will make decision-making process easier by enabling the integration of networks for real time and fast data collection. The biggest motivation for us is that this project will pave a path for further research in the area of intelligent building management. There is also a big demand for such systems in our society at the moment because the wonders of automation have been proved with noticeable decrease in operating cost and an increase in productivity. Hence, it is undeniable that any product that will provide comfort as well as energy management solutions that are reliable and user-friendly will be highly appreciated in the market. 
### Problem Statement 
“Implement a Building Management System that monitors the fluid level using ultrasonic and flow rate sensors. Also monitor the humidity and temperature of the building, and power ratings of the devices. Implement the whole system through the Internet of Things technology and create an easy-to-use graphical user interface.”
## Table of Contents
- [Methodology](#Methodology)
- [Components and Protocols](#Components-and-Protocols)
- [Sensor Interfacing and PCB Layouts](#Sensor-Interfacing-and-PCB-Layouts)
- [Local vs Cloud Servers](#Local-vs-Cloud-Servers)
### Methodology
![bd](https://user-images.githubusercontent.com/93503745/160241451-a8d96461-17f2-41ff-9a2a-8567d1191779.png)
### Components and Protocols
- Microcontroller used in this Project is: Lolin d1 mini Pro, which has an ESP8266 module.
- Communication Protocol used between sensors and controller is IIC.
Most of the sensors we used were not IIC Sensors so we used attiny85 between microcontroller and sensor to act as a secondary coltroller and cover the digital data to IIC.
![iic](https://user-images.githubusercontent.com/93503745/160242074-2e50605e-d6fe-4f79-bf85-1e94fcbc11e1.png)
- Protocol for Gateway to Server Communication is MQTT.
### Hardware Implementation
Sensors used:
- Current Sensor ACS712
- Temperature Sensor LM35
- Humidty Sensor DHT-11
- Ultrasonic Sensor HC-SR04
- Flow Rate Sensor FY-B10
#### PCB Layouts
![image](https://user-images.githubusercontent.com/93503745/160242750-7864d42c-1d42-4b8a-90b1-ad54e8712d3b.png)
![image](https://user-images.githubusercontent.com/93503745/160242820-55e2f950-8458-42ee-98f6-f1da138d6fd5.png)
![image](https://user-images.githubusercontent.com/93503745/160242847-a051a703-b177-46e4-874b-0c6976809fcc.png)

### Local vs Cloud Servers
We have tried both Local and Cloyd Servers for implementing this project. But, in order to cut time in designing the GUI to go with our Local Server, we opted for the platform Blynk, which has its own cloud server. 
