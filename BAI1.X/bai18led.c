#define _XTAL_FREQ 4000000
#include <htc.h>
#include "interrup.h"
#include <xc.h>
__CONFIG(0x3FF2); //config_word 1
__CONFIG(0x3FFF); //config_word 2
unsigned char so[10] = {
    0x40, //so0
    0x79, //so1
    0xA4, //so2
    0xB0, //so3
    0x99, //so4
    0x92, //so5
    0x82, //so6
    0xF8, //so7
    0x00, //so8
    0x90, //so9
    //0x90,//so9
};
unsigned int i=0;
unsigned int dem=1;
void main(void) {
    TRISC = 0x00;
    TRISD = 0x00;
    TRISB = 0X07;
    PORTD = 0x40;
    PORTC = 0x40;
    PORTB = 0x00;

    
    if (RB0 == 1) {
        __delay_ms(20);
        if (RB0 == 1) {


            for (i; i < 10; i++) {
                PORTD = so[i];
                __delay_ms(200);
                if (i >= 9) {

                    PORTC = so[dem++];
                    i = -1;
                    if (dem > 10) {
                        break;
                    }
                }
            }
        }
    }





    return;
}