#define _XTAL_FREQ 4000000
#include <htc.h>


#include <xc.h>
__CONFIG(0x3FF2) ;	//config_word 1
__CONFIG(0x3FFF) ;	//config_word 2
void main(void){
    TRISE = 0x00;
    TRISB = 0x07;
    PORTE = 0x00;
    RE1 = 1;
     __delay_ms(100);
    RE2=0;
    __delay_ms(100);
    RE1 = 0;
     __delay_ms(100);
    RE2=1;
    __delay_ms(100);
    
    
    
    return;
}