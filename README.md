# THIEF-DETECTION-SYSTEM-ARDUINO-UNO-PROJECT

 Project Overview- The Thief Detection System is an Arduino Uno-based security project that detects unauthorized movement using a PIR sensor and an IR obstacle sensor. When an intruder is detected, the system immediately activates an LED and a buzzer, displays the warning message "BEWARE OF THE THIEF!" on the Serial Monitor, and identifies the color of the detected object using a color sensor. This project demonstrates the integration of multiple sensors to build a simple embedded security system.

 Objectives-
1. Detect human motion using a PIR sensor.
2. Detect nearby obstacles using an IR sensor.
3. Trigger an alarm using a buzzer and LED.
4. Detect the color (Red, Green, or Blue) of the object.
5. Display warning and color information on the Serial Monitor.

Components Required- Arduino Uno, PIR Motion Sensor, IR Obstacle Sensor, Color Sensor, LED, Buzzer, Breadboard, Jumper Wires, USB Cable

 Sensor Description-
1. PIR Sensor (Passive Infrared Sensor)
Purpose- Detects the movement of humans by sensing changes in infrared radiation emitted by the human body.
Working- Detects body heat.
Output becomes HIGH when motion is detected.
Used to identify the presence of an intruder.
Applications- Home security, Motion-activated lighting, Smart surveillance
2. IR Obstacle Sensor
Purpose- Detects objects placed in front of the sensor.
Working- Emits infrared light, Detects reflected light from nearby objects and Output changes when an obstacle is detected.
Applications- Security systems, Obstacle detection, Robot navigation
3. Color Sensor
Purpose- Detects the color of the object detected by the security system.
Working- The Arduino reads analog values from the sensor and compares them to determine whether the detected object is: Red, Green and Blue
4. LED- Acts as a visual alarm and turns ON whenever a thief is detected.
5. Buzzer- Acts as an audible alarm and sounds whenever a thief is detected.

Circuit Connections- Component	Arduino Pin
1. Buzzer	D2
2. IR Sensor	D3
3. PIR Sensor	D4
4. LED	D9
5. Color Sensor P1	A0
6. Color Sensor P2	A1
7. Color Sensor P3	A2
8. Color Sensor P4	A3
9. Color Sensor VCC	5V
10. Color Sensor GND	GND

Working Principle-
1. Arduino continuously monitors the PIR and IR sensors.
2. If motion or an obstacle is detected:
3. The LED turns ON.
4. The buzzer sounds.
5. The Serial Monitor displays:
6. BEWARE OF THE THIEF!
7. The color sensor reads the detected object's color.
8. The detected color (Red, Green, or Blue) is displayed on the Serial Monitor.
9. When no intruder is detected, the LED and buzzer remain OFF.

Arduino Functions Used- pinMode(), digitalRead(), digitalWrite(), analogRead(), Serial.begin(), Serial.print(), Serial.println(), delay()

Algorithm-
1. Start the system.
2. Initialize all sensors and output devices.
3. Read PIR sensor.
4. Read IR sensor.
5. If motion or obstacle is detected:
6. Turn ON LED.
7. Turn ON buzzer.
8. Display warning message.
9. Read color sensor.
10. Display detected color.
11. If no intruder is detected:
12. Turn OFF LED.
13. Turn OFF buzzer.
14. Repeat continuously.

Expected Output-
*****
BEWARE OF THE THIEF!
*****

Colour Detected : RED

-------------------------------------------------------------------------------------------------
or

*****
BEWARE OF THE THIEF!
*****

Colour Detected : GREEN

-------------------------------------------------------------------------------------------------
or

*****
BEWARE OF THE THIEF!
*****

Colour Detected : BLUE

-------------------------------------------------------------------------------------------------

 Applications- Home security systems, Office security, Warehouse entry monitoring, Restricted area surveillance, Laboratory security, Smart intrusion detection

Skills Demonstrated- Arduino Programming, Embedded Systems, Sensor Interfacing, Security System Design, Analog and Digital Input Processing, Serial Communication, Electronics Prototyping

Project Outcome- This project demonstrates a simple and effective Arduino-based thief detection system using multiple sensors. It combines motion detection, obstacle detection, audible and visual alerts, and basic color identification to monitor unauthorized activity. The project provides hands-on experience with embedded systems, sensor interfacing, and security applications

-Aditi Bhatnagar

