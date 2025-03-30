#include <xc.h>
#include "uart_config.h"  // UART configuration header

#define _XTAL_FREQ 20000000  // Adjust according to your MCU's clock speed

void main() {
    UART_Init(9600);  // Initialize UART with 9600 baud rate

    printf("System Initialization...\n");

    while (1) {
        printf("Running main loop...\n");
        __delay_ms(1000);  // Simulate some process
    }
}
