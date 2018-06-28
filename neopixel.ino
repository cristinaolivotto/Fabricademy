#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif
#define PIN 2
#define NUM_LEDS 9
#define BRIGHTNESS 50

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUM_LEDS, PIN, NEO_GRB + NEO_KHZ800);

//TMP36 Pin Variables
int sensorPin = A0; //the analog pin the TMP36's Vout (sense) pin is connected to the resolution is 10 mV / degree centigrade with a 500 mV offset to allow for negative temperatures

int neopixel = 2;


void setup()
{
  pixels.setBrightness(BRIGHTNESS);
  pixels.begin();
  pixels.show(); // Initialize all pixels to 'off'
  pinMode (neopixel, OUTPUT); // the neopixel pin will be used to control an output device
  pinMode (sensorPin, INPUT); // the TMP36 sensor tells the Arduino the kind of sensor
  Serial.begin(9600);  //Start the serial connection with the computer
                       //to view the result open the serial monitor 
}
 
void loop()                     // run over and over again
{
//getting the voltage reading from the temperature sensor
 int reading = analogRead(sensorPin);  
 
 // converting that reading to voltage, for 3.3v arduino use 3.3
 float voltage = reading * 5.0;
 voltage /= 1024.0; 

  // print out the voltage
 Serial.print(voltage); Serial.println(" volts");
 
 // now print out the temperature
 float temperatureC = (voltage - 0.5) * 100 ;  //converting from 10 mv per degree wit 500 mV offset
                                             // to degrees ((voltage - 500mV) times 100)
 Serial.print(temperatureC); Serial.println(" degrees C"); 

 
 
 delay(1000); 
//waiting a second

  
for(int i=0;i<NUM_LEDS;i++) {
 //https://htmlcolorcodes.com/color-names/

if (temperatureC > 10 && temperatureC < 10.5  ) {
  

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(25,25,112)); 

    pixels.show(); // This sends the updated pixel color to the hardware.

  }
  if (temperatureC > 10.5 && temperatureC < 11 ) {
  

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0,0,205)); //

    pixels.show(); // This sends the updated pixel color to the hardware.

  }
  if (temperatureC > 11 && temperatureC < 11.5  ) {
  

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(123, 104, 238)); 

    pixels.show(); // This sends the updated pixel color to the hardware.

  }
  if (temperatureC > 11.5 && temperatureC < 12  ) {
  

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0,191,255)); //

    pixels.show(); // This sends the updated pixel color to the hardware.

  }
  if (temperatureC > 12 && temperatureC < 12.5 ) {
  

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(173, 216, 230)); //

    pixels.show(); // This sends the updated pixel color to the hardware.

  }
  if (temperatureC > 12.5 && temperatureC < 13 ) {
  

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0, 206, 209)); //

    pixels.show(); // This sends the updated pixel color to the hardware.

  }
  if (temperatureC > 13 && temperatureC < 13.5  ) {
  

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(127, 255, 212)); //

    pixels.show(); // This sends the updated pixel color to the hardware.

  }
  if (temperatureC > 13.5 && temperatureC < 14  ) {
  

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0, 255, 255)); //

    pixels.show(); // This sends the updated pixel color to the hardware.

  }
  if (temperatureC > 14 && temperatureC < 14.5  ) {
  

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0, 139, 139)); //

    pixels.show(); // This sends the updated pixel color to the hardware.

  }
  if (temperatureC > 14.5 && temperatureC < 15  ) {
  

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(25,25,112)); //

    pixels.show(); // This sends the updated pixel color to the hardware.

  }
  if (temperatureC > 15 && temperatureC < 15.5  ) {
  

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(102, 205, 170)); //

    pixels.show(); // This sends the updated pixel color to the hardware.

  }
  if (temperatureC > 15.5 && temperatureC < 16 ) {
  

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(154, 205, 50)); //

    pixels.show(); // This sends the updated pixel color to the hardware.

  }
  if (temperatureC > 16 && temperatureC < 16.5  ) {
  

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0, 128,0)); //

    pixels.show(); // This sends the updated pixel color to the hardware.

  }
  if (temperatureC > 16.5 && temperatureC < 17  ) {
  

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0, 255, 127 )); //

    pixels.show(); // This sends the updated pixel color to the hardware.

  }
  if (temperatureC > 17 && temperatureC < 17.5  ) {
  

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(144, 238, 144)); //

    pixels.show(); // This sends the updated pixel color to the hardware.

  }
  if (temperatureC > 17.5 && temperatureC < 18  ) {
  

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0, 255,0)); //

    pixels.show(); // This sends the updated pixel color to the hardware.

  }
  if (temperatureC > 18 && temperatureC < 19.5  ) {
  
    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(173, 255, 47 )); //

    pixels.show(); // This sends the updated pixel color to the hardware.

  }
  if (temperatureC > 19.5 && temperatureC < 20 ) {
  

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(123,104,238)); //

    pixels.show(); // This sends the updated pixel color to the hardware.

  }
  if (temperatureC > 20 && temperatureC < 21.5  ) {
  

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(75,0,130)); //

    pixels.show(); // This sends the updated pixel color to the hardware.

  }
  if (temperatureC > 21.5 && temperatureC < 22  ) {
  

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(139,0,139)); //

    pixels.show(); // This sends the updated pixel color to the hardware.

  }
  if (temperatureC > 22 && temperatureC < 22.5  ) {
  

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(148,0,211)); //

    pixels.show(); // This sends the updated pixel color to the hardware.

  }
  if (temperatureC > 22.5 && temperatureC < 23 ) {
  

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(186,85,211)); //

    pixels.show(); // This sends the updated pixel color to the hardware.

  }
  if (temperatureC > 23 && temperatureC < 23.5  ) {
  

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(255,0,255)); //

    pixels.show(); // This sends the updated pixel color to the hardware.

  }
  if (temperatureC > 23.5 && temperatureC < 24 ) {
  

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(238,130,238)); //

    pixels.show(); // This sends the updated pixel color to the hardware.

  }
  if (temperatureC > 24 && temperatureC < 24.5  ) {
  

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(230,230,250)); //

    pixels.show(); // This sends the updated pixel color to the hardware.

  }
  if (temperatureC > 24.5 && temperatureC < 25  ) {
  

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(255, 218,185)); //

    pixels.show(); // This sends the updated pixel color to the hardware.

  }
  if (temperatureC > 25 && temperatureC < 25.5  ) {
  

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(255,250,205)); //

    pixels.show(); // This sends the updated pixel color to the hardware.

  }
  if (temperatureC > 25.5 && temperatureC < 26 ) {
  

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(255,255,0)); //

    pixels.show(); // This sends the updated pixel color to the hardware.

  }
  if (temperatureC > 26 && temperatureC < 26.5  ) {
  

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(255,165,0)); //

    pixels.show(); // This sends the updated pixel color to the hardware.

  }
  if (temperatureC > 26.5 && temperatureC < 27  ) {
  

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(255,69,0)); //

    pixels.show(); // This sends the updated pixel color to the hardware.

  }
  if (temperatureC > 27 && temperatureC < 27.5  ) {
  

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(199,21,133)); //

    pixels.show(); // This sends the updated pixel color to the hardware.

  }
  if (temperatureC > 27.5 && temperatureC < 28  ) {
  

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(255,105,180)); //

    pixels.show(); // This sends the updated pixel color to the hardware.

  }
  if (temperatureC > 28 && temperatureC < 28.5  ) {
  

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(255,192,203)); 

    pixels.show(); // This sends the updated pixel color to the hardware.

  }
  if (temperatureC > 28.5 && temperatureC < 29  ) {
  

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(25, pixels.Color(255,255,0)); //

    pixels.show(); // This sends the updated pixel color to the hardware.

  }
  if (temperatureC > 29 && temperatureC < 29.5  ) {
  

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(220,20,60)); 

    pixels.show(); // This sends the updated pixel color to the hardware.

  }
  if (temperatureC > 29.5 && temperatureC < 30  ) {
  

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(255,160,122)); 

    pixels.show(); // This sends the updated pixel color to the hardware.

  }
  if (temperatureC > 30 && temperatureC < 30.5  ) {
  

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(250,128,114)); 

    pixels.show(); // This sends the updated pixel color to the hardware.

  }
  if (temperatureC > 30.5 && temperatureC < 31 ) {
  

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(240,128,128)); 

    pixels.show(); // This sends the updated pixel color to the hardware.

  }
  if (temperatureC > 31 && temperatureC < 31.5  ) {
  

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(205,92,92)); 

    pixels.show(); // This sends the updated pixel color to the hardware.

  }
  if (temperatureC > 31.5 && temperatureC < 32 ) {
  

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(178,34,34)); 

    pixels.show(); // This sends the updated pixel color to the hardware.

  }
  if (temperatureC > 32 && temperatureC < 32.5 ) {
  

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(128,0,0)); 

    pixels.show(); // This sends the updated pixel color to the hardware.


  }


// Input a value 0 to 255 to get a color value.
// The colours are a transition r - g - b - back to r.
// 10Bit = 1024, 8Bit = 256 -> divide by 4
/*uint32_t colorcode = Wheel(reading/4); //Wheel(analogRead(A0)/4); oppure metto (temperatureC + 15)/4

uint32_t Wheel(byte WheelPos) {
  WheelPos = 255 - WheelPos;
  if(WheelPos < 85) {
    return strip.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  }
  if(WheelPos < 170) {
    WheelPos -= 85;
    return strip.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
  WheelPos -= 170;
  return strip.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
  */


}}
