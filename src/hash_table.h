/* ************************************************************************** */
/** Hash table implementation

  @File Name
    hash_table.h

  @Summary
    Functions prototypes for hash table ADT.

  @Description
    This header file contains the function prototypes used in the implementation
    of a hash table ADT. This ADT is a table of structures with unique keys to
    data values. The key is of type int whereas the data is of type string. This
    implementation is adapted from the following URL:
    https://www.tutorialspoint.com/data_structures_algorithms/hash_table_program_in_c.htm
 */
/* ************************************************************************** */

    /* ************************************************************************** */
    /* ************************************************************************** */
    /* Section: Constants                                                         */
    /* ************************************************************************** */
    /* ************************************************************************** */

    /* ************************************************************************** */
    /** Table_size

      @Summary
        Number of key-value pairs in the hash table.
    
      @Description
        This constant represents the array size for the hash table. It will store
        the key value pairs for alphanumeric characters and punctuation marks 
        which are 67 in total.
     */
#define TABLE_SIZE 67

    // *****************************************************************************
    // *****************************************************************************
    // Section: Data Types
    // *****************************************************************************
    // *****************************************************************************

    /*  A brief description of a section can be given directly below the section
        banner.
     */

    // *****************************************************************************

    /** Data item

      @Summary
        Define data item that has an integer as key and string as the value.
    
      @Description
        This data item defines the struct to be stored in the hash table. It
        includes an integer as the key and a string as the value. 
     */
    typedef struct data_item_t {
        /* Integer of English char as key. */
        int key;

        /* Morse code of english character as an array. */
        char code [7];

    } data_item_t;
    
    /** This represents the array storing the key-value pairs of a data item **/
   // struct data_item_t *hashArray[TABLE_SIZE]; 
    
    /** This represents a key-value pair to represent a dummy data item in a
     hash table **/
    struct data_item_t *dummyItem;
    
    /** This represents a key-value pair to represent an actual data item in a
     hash table **/
    struct data_item_t *item;

    // *****************************************************************************
    // *****************************************************************************
    // Section: Interface Functions
    // *****************************************************************************
    // *****************************************************************************

    /*  A brief description of a section can be given directly below the section
        banner.
     */

    // *****************************************************************************
    /**
      @Function
        int ExampleFunctionName ( int param1, int param2 ) 

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
    
    /** hashing function for indexing **/
    int
    get_hash_code(int key);
    
    /** search a data item in the hash table **/
    struct 
    data_item_t *search(int key, struct data_item_t *hash_array[TABLE_SIZE]);
    
    /** insert a data item in the hash table **/
    void 
    insert(int key,char data[], struct data_item_t *hash_array[TABLE_SIZE]);
    
    /** delete a data item in the hash table **/
    struct
    data_item_t *delete_data_item(struct data_item_t* item, struct data_item_t *hash_array[TABLE_SIZE]);
    
    




//#endif /* _EXAMPLE_FILE_NAME_H */

/* *****************************************************************************
 End of File
 */
