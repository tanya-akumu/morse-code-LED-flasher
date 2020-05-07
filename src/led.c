/* ************************************************************************** */
/** led module

  @File Name
    led.c

  @Summary
    Module to "flash" led.

  @Description
    This module configures the different functions to "flash" an LED according
    to the morse code character. A morse code character can be a dot, a dash, a
    word space or a letter space. The "flashing" of the LED is implemented in a
    way such that the delay time is different for each morse code character.The
    timing is as below:
    dot length = configured as 1 second
    signal space length = one dot length
    dash length = 3 dot lengths
    letter space length = 3 dot lengths
    word space length = 7 dot lengths */
/* ************************************************************************** */


/* ************************************************************************** */
/* ************************************************************************** */
/* Section: Included Files                                                    */
/* ************************************************************************** */
/* ************************************************************************** */
//#include <stdlib.h>
#include <stdio.h>
#include <cp0defs.h> 
#include "led.h"
/* ************************************************************************** */
/* ************************************************************************** */
/* Section: File Scope or Global Data                                         */
/* ************************************************************************** */
/* ************************************************************************** */
int dot_length = 1000; // in milliseconds


/* ************************************************************************** */
/* ************************************************************************** */
// Section: Interface Functions                                               */
/* ************************************************************************** */
/* ************************************************************************** */

/*  A brief description of a section can be given directly below the section
    banner.
 */

// *****************************************************************************

/** 
  @Function
    void delay_us(unsigned int us) 

  @Summary
    Delay in microseconds function.

  @Remarks
    Refer to the led.h interface header for function usage details.
 */
void 
delay_us (unsigned int us)
{
    // Convert microseconds us into clock ticks
    // Core Timer updates every 2 ticks
    us *= SYS_FREQ / 1000000 / 2; 

    _CP0_SET_COUNT(0); // Set Core Timer count to 0

    // Wait until Core Timer count reaches the clock ticks
    while (us > _CP0_GET_COUNT());  
}

/** 
  @Function
    delay_ms(unsigned int ms) 

  @Summary
    Delay in milliseconds function.

  @Remarks
    Refer to the led.h interface header for function usage details.
 */
void 
delay_ms (unsigned int ms)
{
    delay_us(ms * 1000); 
}

/** 
  @Function
    void delay (int count) 

  @Summary
    Delay in by the passed in counter.

  @Remarks
    Refer to the led.h interface header for function usage details.
 */
void delay (int time)
{
    while(time > 0) {time --;}
}


/* *****************************************************************************
 End of File
 */
