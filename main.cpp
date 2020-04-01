#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;
PwmOut PWM1(D6);

int main()
{
    // basic printf demo = 16 by 18 characters on screen
   
    uLCD.printf("\n  107033134\n");
    uLCD.text_width(4); //4X size text
    uLCD.text_height(4);

    uLCD.filled_rectangle(50, 50, 70,70, 0x00FF00);
    
}