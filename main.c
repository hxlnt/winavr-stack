#include <avr/include/avr/io.h>
#include <avr/include/avr/iotn85.h>
#include <avr/include/avr/delay.h>

void main(){
    // Set output pins on port B (PBn)

    // Set pin 5 to output
    DDRB |= (1 << PB5);

    while (1) {
        // Write 1 to bit 5 (tilde inverts)
        PORTB &= ~(1 << PB5);
        _delay_ms(100);
        PORTB |= (1 << PB5);
        _delay_ms(100);
        
    }


}