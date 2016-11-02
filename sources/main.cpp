#include "mbed.h"

DigitalOut myled1(LED1),myled2(LED2);

Serial pc(USBTX,USBRX);
/*
__MBED__=1
__MBED_CMSIS_RTOS_CM INITIAL_SP


*/
int main() {
    
    pc.printf("transplant to ARMCC compelete!\n\r");
    while(1) {
        myled1 = 1;
        myled2 = 0;    
        wait(0.2);
        myled1 = 0;
        myled2 = 1;
        wait(0.2);
        pc.printf("leds is blinking!\n\r");
    }
}
