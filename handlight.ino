
/*
The MIT License (MIT)

Copyright (c) [2014] [Evan Graham]

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#include <Adafruit_NeoPixel.h>

#define PIN 0
Adafruit_NeoPixel pixel = Adafruit_NeoPixel(60, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pixel.begin();
  pixel.show(); // Initialize all pixels to 'off'

}

void loop() {
  // Some example procedures showing how to display to the pixels:
  
 uint32_t random_color = pixel.Color(random(0,255),random(0,255),random(0,255));
 
 
  pixel.setPixelColor(0,0,0,0);
  pixel.show(); 
  delay(random(1000,2000));
  pixel.setPixelColor(0,random_color);
  pixel.show();
 delay (random(20,100));

  
  pixel.setPixelColor(0,0,0,0);
  pixel.show(); 
  delay(random(500,1500));
  pixel.setPixelColor(0,random_color);
  pixel.show(); 
  delay (random(20,80));
  
  pixel.setPixelColor(0,0,0,0);
  pixel.show(); 
  delay(random (250,600));
  pixel.setPixelColor(0,random_color);
  pixel.show(); 
  delay (random(10,100));

  pixel.setPixelColor(0,0,0,0);
  pixel.show(); 
  delay(random (60,120));
  pixel.setPixelColor(0,random_color);
  pixel.show(); 
  delay (random (30,110));

  pixel.setPixelColor(0,0,0,0);
  pixel.show(); 
  delay(random(100,300));
  pixel.setPixelColor(0,random_color);
  pixel.show(); 
  delay (random(10,110));

  pixel.setPixelColor(0,0,0,0);
  pixel.show(); 
  delay(random(100,200));
  pixel.setPixelColor(0,random_color);
  pixel.show(); 
  delay (random(5000,20000));
  
  for (int i=255;i>-1;i--){
    pixel.setBrightness(i);
    pixel.show();
    delay(100);
  }
 pixel.setBrightness(255);  
 }


