#include<16f72.h>
#device adc=10
#include <stdlib.h>
#use delay (clock=20000000)
#fuses HS,NOWDT,NOPROTECT,NOBROWNOUT,NOPUT

int main()
{
  output_high(PIN_C0);
  output_low(PIN_B0);
  output_low(PIN_C0);
  output_low(PIN_B1);
  output_low(PIN_C1);
  output_low(PIN_B2);
  output_low(PIN_C2);
  output_low(PIN_B3);
  output_low(PIN_C3);

  while(input(PIN_C7) == 1){
    if (input(PIN_A0)){

    }
  }
}
