#include <mega32.h>
#include <stdlib.h>
#include <stdio.h>
#include <alcd.h>
#include <delay.h>
#define ADC_VREF_TYPE ((0<<REFS1) | (0<<REFS0) | (0<<ADLAR))

unsigned int read_adc(unsigned char adc_input)
{
    ADMUX=adc_input | ADC_VREF_TYPE;
    delay_us(10);
    ADCSRA|=(1<<ADSC);
    while ((ADCSRA & (1<<ADIF))==0);
    ADCSRA|=(1<<ADIF);
    return ADCW;
}

void main(void)
{
    char dataSuhu[20], nilai; 
    
    ADMUX=ADC_VREF_TYPE;
    ADCSRA=(1<<ADEN) | (0<<ADSC) | (0<<ADATE) | (0<<ADIF) | (0<<ADIE) | (0<<ADPS2) | (1<<ADPS1) | (1<<ADPS0);
    SFIOR=(0<<ADTS2) | (0<<ADTS1) | (0<<ADTS0);
    lcd_init(16);

while (1)
      {
      lcd_clear();
      nilai = read_adc(0)/2.05;
      sprintf(dataSuhu,"%d",nilai);
      lcd_gotoxy(1,0);
      lcd_puts("Data Suhu : ");
      lcd_gotoxy(13,0);
      lcd_puts(dataSuhu);
      delay_ms(500);
                    
      if(nilai>=38){
      lcd_gotoxy(0,2);
      lcd_puts("Waspada COVID-19");
      }
      else if(nilai>=36){
      lcd_gotoxy(3,2);
      lcd_puts("Anda Sehat");
      }   
      else{
      lcd_gotoxy(2,2);
      lcd_puts("Sedang Sakit");
      }
      delay_ms(1000);   
    }  
}
