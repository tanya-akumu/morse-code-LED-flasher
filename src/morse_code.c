/* ************************************************************************** */
/** Morse code generator module

  @Company
    Plentify

  @File Name
    morse_code.c

  @Summary
    This module defines the functions to  parses a string and generates its 
    equivalent morse code.

  @Description
    This interface file contains the function definitions for parsing an 
    arbitrary size of English text and generates its equivalent morse code in 
    string format.
 */

/* ************************************************************************** */
/* Section: Included Files                                                    */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "morse_code.h"
#include "hash_table.h"

/* ************************************************************************** */
/* ************************************************************************** */
/* Section: File Scope or Global Data                                         */
/* ************************************************************************** */
/* ************************************************************************** */

/*  Look up table that stores the morse code values of all the alphanumeric and
    punctuation characters of the English text. The key is the integer version of
    the character and the value is the code.
 */
static struct data_item_t *hash_array[TABLE_SIZE];

/* ************************************************************************** */
/* ************************************************************************** */
// Section: Interface Functions                                               */
/* ************************************************************************** */
/* ************************************************************************** */

static void reset_string(char str[])
{
    int loop;
    for(loop = 0; loop < STRING_SIZE; loop++)
    {
        str[loop] = NULL;
    }
}
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
    void
    convert_to_upper_case (char str[]) 

  @Summary
    This function converts the passed in string to upper case.

  @Remarks
    Refer to the morse_code.h interface header for function usage details.
 */
void
convert_to_upper_case (char str[])
{
    int counter;
    
    for (counter = 0; str[counter] != '\0'; counter++)
    {
        str[counter] = toupper(str[counter]);
    }
}

/** 
  @Function
    void
    setup_morse_code_table()

  @Summary
    This function sets up the morse code look up table.

  @Remarks
    Refer to the morse_code.h interface header for function usage details.
 */
void
setup_morse_code_table()
{
    insert((int) 'A', ".-", hash_array);
    insert((int) 'B', "-...", hash_array);
    insert((int) 'C', "-.-.", hash_array);
    insert((int) 'D', "-..", hash_array);
    insert((int) 'E', ".", hash_array);
    insert((int) 'F', "--.", hash_array);
    insert((int) 'G', "-..", hash_array);
    insert((int) 'H', "....", hash_array);
    insert((int) 'I', "..", hash_array);
    insert((int) 'J', ".---", hash_array);
    insert((int) 'K', "-.-", hash_array);
    insert((int) 'L', ".-..", hash_array);
    insert((int) 'M', "--", hash_array);
    insert((int) 'N', "-.", hash_array);
    insert((int) 'O', "---", hash_array);
    insert((int) 'P', ".--.", hash_array);
    insert((int) 'Q', "--.-", hash_array);
    insert((int) 'R', ".-.", hash_array);
    insert((int) 'S', "...", hash_array);
    insert((int) 'T', "-", hash_array);
    insert((int) 'U', "..-", hash_array);
    insert((int) 'V', "...-", hash_array);
    insert((int) 'W', ".--", hash_array);
    insert((int) 'X', "-..-", hash_array);
    insert((int) 'Y', "-.--", hash_array);
    insert((int) 'Z', "--..", hash_array);

    insert((int) '0', "-----", hash_array);
    insert((int) '1', ".----", hash_array);
    insert((int) '2', "..---", hash_array);
    insert((int) '3', "...--", hash_array);
    insert((int) '4', "....-", hash_array);
    insert((int) '5', ".....", hash_array);
    insert((int) '6', "-....", hash_array);
    insert((int) '7', "--...", hash_array);
    insert((int) '8', "---..", hash_array);
    insert((int) '9', "----.", hash_array);

    insert((int) '.', ".?.?.?", hash_array);
    insert((int) ',', " ?..??", hash_array);
    insert((int) '?', "..--..", hash_array);
    insert((int) '/', "-..-.", hash_array);
    insert((int) '(', "-.--.", hash_array);
    insert((int) ')', "-.--.-", hash_array);
    insert((int) ':', "???...", hash_array);
    insert((int) '-', "-....-", hash_array);
    insert((int) '@', ".--.-.", hash_array);
    insert((int) '\"', ".?..?.", hash_array);
    insert((int) '\'', ".????.", hash_array);
    insert((int) '=', "?...?", hash_array);
    insert((int) ' ', " ", hash_array);
}

/** 
  @Function
    void
    encode(char str [], char code[][STRING_SIZE])

  @Summary
    This function generates the morse code for the parsed in string.

  @Remarks
    Refer to the morse_code.h interface header for function usage details.
 */
/**  **/
void
encode(char str [], char code[][STRING_SIZE])
{
    
    int counter;
    char temp[STRING_SIZE];
    struct data_item_t* temp_t;
    int key;

    setup_morse_code_table();
     
    for(counter = 0; str[counter] != '\0'; counter++)
    {
        reset_string(temp);
        key = (int)str[counter];
        temp_t = search(key, hash_array);
        strcpy(temp,(temp_t->code));
        strcpy(code[counter], temp);
    }
}


/* *****************************************************************************
 End of File
 */
