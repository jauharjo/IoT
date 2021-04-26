#include <mega32.h>
#include <delay.h>

void main()
{
   DDRC = 255;
   DDRD = 255;
while (1)
      {
     PORTC = 0b01011011;
            // HGFEDCBA   

     PORTD = 0b0 j0100100;
            // HGFEDCBA   
      }
}
