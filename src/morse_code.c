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
// Section: Local Functions                                                   */
/* ************************************************************************** */
/* ************************************************************************** */

/*  A brief description of a section can be given directly below the section
    banner.
 */

/* ************************************************************************** */

/** 
  @Function
    int ExampleLocalFunctionName ( int param1, int param2 ) 

  @Summary
    Brief one-line description of the function.

  @Description
    Full description, explaining the purpose and usage of the function.
    <p>
    Additional description in consecutive paragraphs separated by HTML 
    paragraph breaks, as necessary.
    <p>
    Type "JavaDoc" in the "How Do I?" IDE toolbar for more information on tags.

  @Precondition
    List and describe any required preconditions. If there are no preconditions,
    enter "None."

  @Parameters
    @param param1 Describe the first parameter to the function.
    
    @param param2 Describe the second parameter to the function.

  @Returns
    List (if feasible) and describe the return values of the function.
    <ul>
      <li>1   Indicates an error occurred
      <li>0   Indicates an error did not occur
    </ul>

  @Remarks
    Describe any special behavior not described above.
    <p>
    Any additional remarks.

  @Example
    @code
    if(ExampleFunctionName(1, 2) == 0)
    {
        return 3;
    }
 */


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
    int ExampleInterfaceFunctionName ( int param1, int param2 ) 

  @Summary
    Brief one-line description of the function.

  @Remarks
    Refer to the example_file.h interface header for function usage details.
 */
/** This function converts the passed in string to upper case*/
void
convert_to_upper_case (char str[])
{
    int counter;
    
    for (counter = 0; str[counter] != '\0'; counter++)
    {
        str[counter] = toupper(str[counter]);
    }
}

/** This function sets up the morse code look up table **/
void
setup_morse_code_table()
{
    insert((int) 'A', ".-", hash_array);
    insert((int) 'b', "-...", hash_array);
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
    insert((int) ',', ".?.?.?", hash_array);
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

/* *****************************************************************************
 End of File
 */
