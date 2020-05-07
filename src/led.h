/* ************************************************************************** */
/** led module

  @File Name
    led.h

  @Summary
    Module to "flash" led.

  @Description
    This module configures the different functions to "flash" an LED (turn it
    ON and OFF according to the morse code signal. A morse code character can
    be a dot, a dash, a signal space, a word space or a letter space. The "flashing"
    of the LED is implemented in a way such that the delay time is different for
    each morse code character. The timing is as below:
    dot length = configured as 1 second
    signal space length = one dot length
    dash length = 3 dot lengths
    letter space lenght = 3 dot lengths
    word space length = 7 dot lengths
 */
/* ************************************************************************** */
#ifndef led_H
#define led_H

#define SYS_FREQ 20000000 // Running at 20MHz
#define LED_PIN  LATAbits.LATA5  //GPIO pin for LED

/* on and off states for LED pin */
typedef enum { ON = 1, OFF = 0 } LED_state_t; 


/*
 @Summary
        Delay in microseconds function.

      @Description
        This is the delay function for microseconds. It converts the passed integer
        into clock ticks and waits until the core timer count reaches the clock 
        ticks
      
      @Precondition
        System frequency set to 20 MHz

      @Parameters
        @param int us: The number of microseconds to delay by.

    @Returns
        None 
     */
void 
delay_us( unsigned int us);

/*
 @Summary
        Delay in milliseconds function.

      @Description
        This is the delay function for millisecond delay. It converts the passed
        integer into microseconds and then calls the delay_us() function to
        implement the delay for this time.
      
      @Precondition
        System frequency set to 20 MHz

      @Parameters
        @param int ms: The number of milliseconds to delay by

    @Returns
        None 
     */
void 
delay_ms( unsigned int ms);

/*
 @Summary
        Turn the LED on to show dash signal in morse code.

      @Description
        This function turns the LED on, and calls the delay function to pause
        for the duration of the computed dash length. It then calls the 
        show_signal_space() function to show a space after the dash signal. The
        dash length is computed as the dot_length*3.
      
      @Precondition
        None

      @Parameters
        None

    @Returns
        None 
     */
void 
show_dash();

/*
 @Summary
        Turn the LED on to show dot signal in morse code.

      @Description
        This function turns the LED on, and calls the delay function to pause
        for the duration of the configured dot length. It then calls the 
        show_signal_space() function to show a space after the dot signal.
      
      @Precondition
        None

      @Parameters
        None

    @Returns
        None 
     */
void 
show_dot();

/*
 @Summary
        Turn the LED OFF to space in between the morse code signals.

      @Description
        This function turns the LED OFF, and calls the delay function to pause
        for the duration of the signal space length. The signal space length is
        equal to the dot length.
        
      @Precondition
        None

      @Parameters
        None

    @Returns
        None 
     */
void 
show_signal_space();

/*
 @Summary
        Turn the LED OFF to show space in between the words of English text.

      @Description
        This function turns the LED OFF, and calls the delay function to pause
        for the duration of the word space length. The word space length is
        equal to the dot length*7.
        
      @Precondition
        None

      @Parameters
        None

    @Returns
        None 
     */
void 
show_word_space();

/*
 @Summary
        Turn the LED OFF to space in between the letters of English word.

      @Description
        This function turns the LED OFF, and calls the delay function to pause
        for the duration of the letter space length. The letter space length is
        equal to the dot length*3.
        
      @Precondition
        None

      @Parameters
        None

    @Returns
        None 
     */
void 
show_letter_space();

#endif // led_H
/* *****************************************************************************
 End of File
 */
