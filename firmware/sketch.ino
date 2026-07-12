#include <Adafruit_SSD1306.h>
#include <Wire.h>
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64 
#define SCREEN_ADDRESS 0x3C
Adafruit_SSD1306 display(SCREEN_WIDTH,SCREEN_HEIGHT, &Wire, -1);
#define ldr_pin 34

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
display.setCursor(0,0);
display.clearDisplay();
display.setTextColor(SSD1306_WHITE);
display.setTextSize(1);
display.print("System initializing");
display.display();
delay(2000);
}

void loop() {
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,0);
  int ldrvalue = analogRead(ldr_pin);
  display.print("value:");
  display.print(ldrvalue);
 display.display();
}