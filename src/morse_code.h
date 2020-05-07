/* ************************************************************************** */
/** Morse code generator module

  @File Name
    morse_code.h

  @Summary
    Function prototypes to parses a string and generates its equivalent morse 
    code.

  @Description
    This header file contains the function prototypes for parsing an arbitrary
    size of English text and generates its equivalent morse code in string 
    format.
 
 
 */
#ifndef morse_code_H
#define morse_code_H

#define STRING_SIZE 8

    // *****************************************************************************
    // *****************************************************************************
    // Section: Interface Functions
    // *****************************************************************************
    // *****************************************************************************

// *****************************************************************************
/**
    @Function
        void
        convert_to_upper_case (char str[]);
      @Summary
        converts the passed in string to upper case. 

      @Description
        This function converts the passed in string to its upper case form. It 
        loops through the length of the string and converts each character to its 
        upper case form.  

      @Precondition
        None

      @Parameters
        @param char str[] : String to be converted to upper case.

    @Returns
       None
     */
    void
    convert_to_upper_case (char str[]);

// *****************************************************************************
    /**
      @Function
        void
        setup_morse_code_table();
     * 
      @Summary
        This function sets up the morse code look up table. 

      @Description
        This function uses the insert() function of the hash table to insert the
        key value pairs of the english characters and equivalent morse code. The
        key is the english character cast to int and the value is the morse code
        in string format.  

      @Precondition
        None

      @Parameters
     None

    @Returns
       None
     */
    void
    setup_morse_code_table();

    // *****************************************************************************
    /**
      @Function
        void
        encode(char str [], char code[][STRING_SIZE]);
     * 
      @Summary
        This function generates the morse code for the passed in string. 

      @Description
        This function sets up the morse code look up table and then generates 
        the morse code for each character of the string and adds this to the 
        passed in array of morse code strings. The generation is done by first 
        searching for the character in the hash table and extracting its morse 
        code value. This code is then copied as an element in the array of morse
        codes for the string.

      @Precondition
        set up morse code look up table

      @Parameters
     None

    @Returns
       None
     */
    void
    encode(char str [], char code[][STRING_SIZE]);

#endif // morse_code_H
/* *****************************************************************************
 End of File
 */
