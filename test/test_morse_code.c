#include "unity.h"
#include "morse_code.h"
#include "hash_table.h"

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 80
#define STRING_SIZE 8

void setUp(void)
{
}

void tearDown(void)
{
}

void test_morse_code_NeedToImplement(void)
{
    TEST_IGNORE_MESSAGE("Need to Implement morse_code");
}

void test_convert_to_uppercase(void)
{
    char word [STRING_SIZE] = "abcdefghijklmnopqrstuvwxyz";
	convert_to_upper_case (word);
	TEST_ASSERT_EQUAL_STRING("ABCDEFGHIJKLMNOPQRSTUVWXYZ", word);
}

void test_encode(void)
{
	char morse_code[MAX_SIZE][STRING_SIZE];
	char a[STRING_SIZE];
	char four[STRING_SIZE];
	char star[STRING_SIZE];
	char space[STRING_SIZE];
	char hyp[STRING_SIZE];
	char enn[STRING_SIZE];
	char nine[STRING_SIZE];
	
	encode("A4@ -N9",morse_code);
	
	strcpy(a,morse_code[0]);
	strcpy(four,morse_code[1]);
	strcpy(star,morse_code[2]);
	strcpy(space,morse_code[3]);
	strcpy(hyp,morse_code[4]);
	strcpy(enn,morse_code[5]);
	strcpy(nine,morse_code[6]);
	
	TEST_ASSERT_EQUAL_STRING(".-",a);
	TEST_ASSERT_EQUAL_STRING("....-",four);
	TEST_ASSERT_EQUAL_STRING(".--.-.",star);
	TEST_ASSERT_EQUAL_STRING(" ",space);
	TEST_ASSERT_EQUAL_STRING("-....-",hyp);
	TEST_ASSERT_EQUAL_STRING("-.",enn);
	TEST_ASSERT_EQUAL_STRING("----.",nine);
}