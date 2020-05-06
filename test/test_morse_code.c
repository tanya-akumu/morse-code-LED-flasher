#include "unity.h"

#include "morse_code.h"
#include "hash_table.h"

data_item_t *hash_array[TABLE_SIZE];


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
    char word [8] = "taNya";
	convert_to_upper_case (word);
	TEST_ASSERT_EQUAL_STRING("TANYA", word);

}