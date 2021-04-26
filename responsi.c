#include <mega32.h>
#include <alcd.h>

void main(void)
{
    DDRA=0;
    DDRD=255;
    
    PORTA=255;
    PORTD=0; 
    lcd_init(16);

while (1)
      {  
      if(PINA.0==0){ 
        PORTD=6; 
        lcd_clear();
        lcd_gotoxy(0,0);
        lcd_putsf("RESPONSI KOMDAT");
      }   
      
      else if(PINA.1==0){
        PORTD=91;
        lcd_clear();
        lcd_gotoxy(0,0);
        lcd_putsf("JOHAR");
      } 
      
      else if(PINA.2==0){
        PORTD=79; 
         lcd_clear();
        lcd_gotoxy(0,0);
        lcd_putsf("19.11.2832");
      } 
      
      else if(PINA.3==0){
        PORTD=102;  
         lcd_clear();
        lcd_gotoxy(0,0);
        lcd_putsf("AMIKOM"); 
        lcd_gotoxy(0,1);
        lcd_putsf("YOGYAKARTA");
      } 
      
      else if(PINA.4==0){
        PORTD=109;   
         lcd_clear();
        lcd_gotoxy(0,0);
        lcd_putsf("SUKSES SELALU");
      } 
        
    }
}
