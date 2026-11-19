# LED Analog Control Using NodeMCU ESP8266 and KiwisIoT

## Project Overview

This project demonstrates analog LED brightness control using a NodeMCU ESP8266 and the KiwisIoT platform. Users can adjust LED brightness through an IoT dashboard over Wi-Fi.

## Hardware Components

- NodeMCU ESP8266
- LED
- Current-limiting resistor
- Breadboard and jumper wires

## Software Requirements

- Arduino IDE
- ESP8266 Board Package
- KiwisIoT Arduino Library
- KiwisIoT Dashboard

## Circuit Connections

The LED is connected to a PWM-capable GPIO pin through a current-limiting resistor. Connect the LED cathode to GND.

_Use the GPIO pin configured in your project._

## Working Principle

The NodeMCU connects to Wi-Fi and communicates with the KiwisIoT dashboard. The dashboard sends an analog brightness value, which the ESP8266 converts into a PWM output to control LED brightness.

## KiwisIoT Dashboard

- Adjust LED brightness using the dashboard control.
- Monitor and control the LED remotely.
- Change brightness in real time over Wi-Fi.

## Configuration

Update your Wi-Fi credentials and KiwisIoT Topic ID in the project configuration.

```cpp
const char* ssid = "YOUR_WIFI_NAME";
const char* pass = "YOUR_WIFI_PASSWORD";
const char* topic = "YOUR_TOPIC_ID";
```

## Applications

- Smart lighting systems
- IoT-based LED dimming
- Wireless lighting control
- Learning PWM and IoT communication

## Project Reference

**Instructables Project:**  
[LED Analog Control Using NodeMCU ESP8266 and KiwisIoT](https://www.instructables.com/LED-Analog-Control-Using-NodeMCU-ESP8266-and-Kiwis)

**KiwisIoT Platform:**  
[https://kiwisiot.com/](https://kiwisiot.com/)

**KiwisIoT GitHub Repository:**  
[https://github.com/Kiwistron/KiwisIoT-Projects](https://github.com/Kiwistron/KiwisIoT-Projects)

## Author

**Hariprasath S**

GitHub: [https://github.com/harispidy07](https://github.com/harispidy07)

---

_Building simple IoT projects with real-time connectivity using KiwisIoT._
