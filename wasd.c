#include <mega32.h>
#include <delay.h>

void main(){
DDRA = 0b0000000;
DDRC = 0b1111111;

PORTA = 255;
PORTC = 0;
while (1){
      if (PINA.0==0){
        PORTC.0=1;
      } else{
        PORTC.0=0;
      }
      
      if (PINA.1==0){
        PORTC.1=1;
      } else{
        PORTC.1=0;
      }
      
      if (PINA.2==0){
        PORTC.2=1;
      } else{
        PORTC.2=0;
      }
      
      if (PINA.3==0){
        PORTC.3=1;
      } else{
        PORTC.3=0;
      }
      
      if (PINA.4==0){
        PORTC.4=1;
      } else{
        PORTC.4=0;
      }
      
      if (PINA.5==0){
        PORTC.5=1;
      } else{
        PORTC.5=0;
      }
      
    }
}
