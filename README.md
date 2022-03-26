# Towards Intlligent Remote Building Management System
The goal of this project is to make an Artifficialy Intelligent Building Management System that monitors and manages parameters like Temperature, Humidity, Presuure, Power Consumption of Devices and Controls Actuators, Lighting etc through Mobile Application/Website, using IoT Technology.
Master Slave Communication
## Slave Code
For secondary microcontroller. Takes analog input and sends it to main microcontroller using IIC pins.
## Master Code
For main microcontroller. Recieves data from secondary microcontroller and dispalys it on the serial monitor.
## OLED Display Code
For interfacing OLED Display with lolin d1 mini pro. Also displays analog pin value on the display.
