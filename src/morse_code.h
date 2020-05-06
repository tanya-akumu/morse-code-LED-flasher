/* ************************************************************************** */
/** Morse code generator module

  @Company
    Plentify

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

/* ************************************************************************** */
/* Section: Included Files                                                    */
/* ************************************************************************** */
/* ************************************************************************** */

/* This section lists the other files that are included in this file.
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>


    /* ************************************************************************** */
    /* ************************************************************************** */
    /* Section: Constants                                                         */
    /* ************************************************************************** */
    /* ************************************************************************** */

    // *****************************************************************************
    // *****************************************************************************
    // Section: Data Types
    // *****************************************************************************
    // *****************************************************************************

    /*  A brief description of a section can be given directly below the section
        banner.
     */


    // *****************************************************************************

    /** Descriptive Data Type Name

      @Summary
        Brief one-line summary of the data type.
    
      @Description
        Full description, explaining the purpose and usage of the data type.
        <p>
        Additional description in consecutive paragraphs separated by HTML 
        paragraph breaks, as necessary.
        <p>
        Type "JavaDoc" in the "How Do I?" IDE toolbar for more information on tags.

      @Remarks
        Any additional remarks
        <p>
        Describe enumeration elements and structure and union members above each 
        element or member.
     */


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

/** This function sets up the morse code look up table **/
void
setup_morse_code_table();

/** This function generates the morse code for the parsed in string **/
void
encode(char str [], char code[][8]);


/* *****************************************************************************
 End of File
 */
