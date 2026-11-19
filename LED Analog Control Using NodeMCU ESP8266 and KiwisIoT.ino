#include <KiwisIoT.h>

const char* ssid = "YOUR_WIFI_SSID";
const char* pass = "YOUR_WIFI_PASSWORD";
const char* topic = "YOUR_KIWISIOT_TOPIC";

KiwisIoT kiwisiot(ssid, pass, topic);


void receiveCommand(String channel, String value)
{
Serial.print("Channel: ");
Serial.print(channel);
Serial.print(" Value: ");
Serial.println(value);

if (channel == "1")
{
int brightness = value.toInt();

brightness = constrain(brightness, 0, 255);

int pwmValue = map(brightness, 0, 255, 0, 1023);

analogWrite(LED_PIN, pwmValue);

Serial.print("LED Brightness: ");
Serial.print(brightness);
Serial.print("/255 PWM: ");
Serial.println(pwmValue);
}
}

void setup()
{
Serial.begin(9600);

pinMode(LED_PIN, OUTPUT);
analogWrite(LED_PIN, 0);

kiwisiot.begin();
kiwisiot.onReceive(receiveCommand);
}

void loop()
{
kiwisiot.run();
}