#include <mega32.h>
#include <alcd.h>
#include <delay.h>

void main()
{
int i;
lcd_init(16);

while (1)
      {
      for(i=15; i>0; i--){
       lcd_gotoxy(i, 1);//Menentukan posisi
       lcd_putsf("Hallo");
       delay_ms(500);
       lcd_clear();
         }

      }
}
