/**
 * @file    main.c
 * @author  Plentify Hardware Team
 *
 */
 
// PIC32MM0256GPM064 Configuration Bit Settings

// 'C' source line config statements

// FDEVOPT
#pragma config SOSCHP = OFF             // Secondary Oscillator High Power Enable bit (SOSC oprerates in normal power mode.)
#pragma config ALTI2C = OFF             // Alternate I2C1 Pins Location Enable bit (Primary I2C1 pins are used)
#pragma config FUSBIDIO = OFF           // USBID pin control (USBID pin is controlled by the USB module)
#pragma config FVBUSIO = OFF            // VBUS Pin Control (VBUS pin is controlled by the USB module)
#pragma config USERID = 0xFFFF          // User ID bits (Enter Hexadecimal value)

// FICD
#pragma config JTAGEN = ON              // JTAG Enable bit (JTAG is enabled)
#pragma config ICS = PGx1               // ICE/ICD Communication Channel Selection bits (Communicate on PGEC1/PGED1)

// FPOR
#pragma config BOREN = BOR3             // Brown-out Reset Enable bits (Brown-out Reset enabled in hardware; SBOREN bit disabled)
#pragma config RETVR = OFF              // Retention Voltage Regulator Enable bit (Retention regulator is disabled)
#pragma config LPBOREN = ON             // Downside Voltage Protection Enable bit (Low power BOR is enabled, when main BOR is disabled)

// FWDT
#pragma config SWDTPS = PS1048576       // Sleep Mode Watchdog Timer Postscale Selection bits (1:1048576)
#pragma config FWDTWINSZ = PS25_0       // Watchdog Timer Window Size bits (Watchdog timer window size is 25%)
#pragma config WINDIS = OFF             // Windowed Watchdog Timer Disable bit (Watchdog timer is in non-window mode)
#pragma config RWDTPS = PS1048576       // Run Mode Watchdog Timer Postscale Selection bits (1:1048576)
#pragma config RCLKSEL = LPRC           // Run Mode Watchdog Timer Clock Source Selection bits (Clock source is LPRC (same as for sleep mode))
#pragma config FWDTEN = OFF             // Watchdog Timer Enable bit (WDT is disabled)

// FOSCSEL
#pragma config FNOSC = FRCDIV           // Oscillator Selection bits (Fast RC oscillator (FRC) with divide-by-N)
#pragma config PLLSRC = FRC             // System PLL Input Clock Selection bit (FRC oscillator is selected as PLL reference input on device reset)
#pragma config SOSCEN = OFF             // Secondary Oscillator Enable bit (Secondary oscillator is disabled)
#pragma config IESO = ON                // Two Speed Startup Enable bit (Two speed startup is enabled)
#pragma config POSCMOD = OFF            // Primary Oscillator Selection bit (Primary oscillator is disabled)
#pragma config OSCIOFNC = ON            // System Clock on CLKO Pin Enable bit (System clock is connected to CLKO/OSC2 pin)
#pragma config SOSCSEL = OFF            // Secondary Oscillator External Clock Enable bit (SOSC pins configured for Crystal mode)
#pragma config FCKSM = CSECME           // Clock Switching and Fail-Safe Clock Monitor Enable bits (Clock switching is enabled; Fail-safe clock monitor is enabled)

// FSEC
#pragma config CP = OFF                 // Code Protection Enable bit (Code protection is disabled)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.


//include files
#include "xc.h"
#include "morse_code.h"
#include "hash_table.h"
#include "led.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    TRISAbits.TRISA5 = 0x00; //set RA5 to output pin
    
    // string of english text
    //char message[] = "A4@ -N9";
    char message[] = "gr3@t fuN";
    
    // array of morse code signals for english test
    char message_in_morse [STRING_ARRAY_SIZE][STRING_SIZE];
    
    int word_counter,sym_counter;
    
    int message_length = strlen(message);
    
    while (1)
    {
        // convert message to upper case
        convert_to_upper_case (message);
        
        // encode message into morse code
        encode(message,message_in_morse);
        
        // flash led according to morse signal
        for(word_counter = 0; word_counter < message_length; word_counter++)
        {
            char temp [STRING_SIZE];
            
            // copy morse code
            strcpy(temp,message_in_morse[word_counter]);
 
            for(sym_counter = 0; temp[sym_counter] != NULL; sym_counter++)
            {
                char morse_symbol = temp[sym_counter];
                if (morse_symbol  == '-')
                {
                    show_dash();
                }
                else if (morse_symbol  == '.')
                {
                    show_dot();
                }
                else if (morse_symbol  == ' ')
                {
                    show_word_space();
                }             
      
            }
            show_letter_space();
        }
    }
 
    return(0);
}