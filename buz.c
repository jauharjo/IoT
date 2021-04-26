#include <mega32.h>
#include <delay.h>

void main(void)
{
    DDRC.0=255;
while (1)                                                                                                                             
      {
      PORTC.0=1; 
      delay_ms(500);  
      PORTC.0=0; 
      delay_ms(500);

      }
}
