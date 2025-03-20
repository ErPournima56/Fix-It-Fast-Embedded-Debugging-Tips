// Below Register-Level Programming can be used as a reference to toggle your gpio pin to debug an error

#include "stm32f4xx.h"  // Change according to your STM32 series

// Function to initialize GPIO pin as output
void gpio_init()
{
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;  // Enable clock for GPIOA (Change GPIOx as needed)
    GPIOA->MODER |= (1 << (5 * 2));       // Set PA5 as output (Change pin as needed)
}

/ Function to toggle GPIO pin
void gpio_toggle()
{
    GPIOA->ODR ^= (1 << 5);  // Toggle PA5 (Change pin as needed)
}

int main()
{
    gpio_init();

    while (1)
    {
        gpio_toggle();
        for (volatile int i = 0; i < 1000; i++);  // Delay
    }
}
