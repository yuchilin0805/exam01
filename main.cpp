#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;
PwmOut PWM1(D7);


int main()
{
    // basic printf demo = 16 by 18 characters on screen
   
    uLCD.printf("\n  107033134\n");
    uLCD.text_width(4); //4X size text
    uLCD.text_height(4);

    uLCD.filled_rectangle(50, 50, 70,70, 0x00FF00);

    while(1){
        PWM1.period(0.001);
        for(float i=0;i<=1;i+=0.1){
            PWM1 = i;
            wait(0.1);
        }
        for(float i=1;i>=0;i-=0.1){
            PWM1=i;
            wait(0.1);
        }
    }
    
    

    
}