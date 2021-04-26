#include <mega32.h>
#include <alcd.h>
#include <delay.h>

void main(void)
{
lcd_init(16);
DDRA.0=0;
DDRD.0=1;

while (1){
        if(PINA.0==1){
        lcd_clear();
        lcd_gotoxy(0,0);
        lcd_putsf("Waktu Malam Hari");
        lcd_gotoxy(0,1);
        lcd_putsf("Lampu Menyala");  
        PORTD.0=1;    //Lampu dan motor diberi sinyal
        delay_ms(100);
      } 
        else if(PINA.0==0){
        lcd_clear();
        lcd_gotoxy(0,0);
        lcd_putsf("Waktu Siang Hari");
        lcd_gotoxy(0,1);
        lcd_putsf("Lampu Mati");  
        PORTD.0=0;  //Lampu dan motor tidak diberi sinyal
        delay_ms(100);
      }  
    }
}
