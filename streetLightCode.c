#include<16f72.h>
#device adc=10
#include <stdlib.h>
#use delay (clock=20000000)
#fuses HS,NOWDT,NOPROTECT,NOBROWNOUT,NOPUT

int main()
{
  output_high(PIN_B0); //output pin 1 IR transmitter
  output_high(PIN_B1); //output pin 2 IR transmitter
  output_high(PIN_B2); //output pin 3 IR transmitter
  output_high(PIN_B3); //output pin 4 IR transmitter

  output_low(PIN_C0); //output pin 1 LED
  output_low(PIN_C1); //output pin 2 LED
  output_low(PIN_C2); //output pin 3 LED
  output_low(PIN_C3); //output pin 4 LED
  output_low(PIN_C4); //output pin 5 LED
  output_low(PIN_C5); //output pin 6 LED
  output_low(PIN_C6); //output pin 7 LED
  output_low(PIN_C7); //output pin 8 LED

  //PIN_A0 IR receiver
  //PIN_A1 IR receiver
  //PIN_A2 IR receiver
  //PIN_A3 IR receiver

  output_low(PIN_A5); //LDR PIN

  while(input(PIN_A5) == 1){
    if (input(PIN_A0)){
      output_high(PIN_C0);
      output_high(PIN_C1);
    }
    if (input(PIN_A1)){
      output_low(PIN_C0);
      output_low(PIN_C1);
      output_high(PIN_C2);
      output_high(PIN_C3);
    }
    if (input(PIN_A2)){
      output_low(PIN_C2);
      output_low(PIN_C3);
      output_high(PIN_C4);
      output_high(PIN_C5);
    }
    if (input(PIN_A3)){
      output_low(PIN_C4);
      output_low(PIN_C5);
      output_high(PIN_C6);
      output_high(PIN_C7);
    }
  }
}
