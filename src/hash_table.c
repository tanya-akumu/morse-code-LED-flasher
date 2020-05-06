/* ************************************************************************** */
/** Hash table implementation

  @File Name
    hash_table.c

  @Summary
    Function definitions for hash table ADT.

  @Description
    This implementation file contains the function definitions used in the 
    implementation of a hash table ADT. This ADT is a table of structures with 
    unique keys to data values. The key is of type int whereas the data is of 
    type string. This implementation is adapted from the following URL:
    https://www.tutorialspoint.com/data_structures_algorithms/hash_table_program_in_c.htm
 */
/* ************************************************************************** */

/** include files **/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "hash_table.h"

/* ************************************************************************** */
/* ************************************************************************** */
// Section: Interface Functions                                               */
/* ************************************************************************** */
/* ************************************************************************** */

/*  A brief description of a section can be given directly below the section
    banner.
 */

/** hashing function to return index for specific key **/
    int
    get_hash_code(int key)
    {
        return key % TABLE_SIZE;
    }

     /** search a data item in the hash table **/
    struct 
    data_item_t *search(int key, struct data_item_t *hash_array[TABLE_SIZE])
    {
        //get the hash 
        int hash_index = get_hash_code(key);  
	
        //move in array until an empty 
        while(hash_array[hash_index] != NULL)
        {
	
        if(hash_array[hash_index]->key == key)
        {
           return hash_array[hash_index]; 
        }
          
        //go to next cell
        ++hash_index;
		
        //wrap around the table
        hash_index %= TABLE_SIZE;
        }        
        
        return NULL;   
    }
    
    
    /** insert a data item in the hash table **/
    void 
    insert(int key, char data[STRING_SIZE], struct data_item_t *hash_array[TABLE_SIZE])
    {
        struct data_item_t *item;
        strcpy(item->code,data);  
        item->key = key;

        //get the hash 
        int hash_index = get_hash_code(key);

        //move in array until an empty or deleted cell
        while(hash_array[hash_index] != NULL && hash_array[hash_index]->key != -1)
        {
            //go to next cell
            ++hash_index;
		
            //wrap around the table
            hash_index %= TABLE_SIZE;
        }
	
        hash_array[hash_index] = item;
    }

    /** delete a data item in the hash table **/
    struct
    data_item_t *delete_data_item(struct data_item_t* item, struct data_item_t *hash_array[TABLE_SIZE])
    {
        struct data_item_t *dummy_item;
        strcpy(dummyItem->code,"");  
        dummyItem->key = -1; 

        int key = item->key;

        //get the hash 
        int hash_index = get_hash_code(key);

        //move in array until an empty
        while(hash_array[hash_index] != NULL)
        {
	
            if(hash_array[hash_index]->key == key)
            {
                struct data_item_t* temp = hash_array[hash_index]; 
			
                //assign a dummy item at deleted position
                hash_array[hash_index] = dummyItem; 
                return temp;
            }
		
            //go to next cell
            ++hash_index;
		
            //wrap around the table
            hash_index %= TABLE_SIZE;
        }      
	
        return NULL;
    }

/* *****************************************************************************
 End of File
 */
