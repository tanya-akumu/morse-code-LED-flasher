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
        which are 50 in total as per the ITU standard.
     */
#define TABLE_SIZE 50
#define STRING_SIZE 8

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

        /* Morse code of english character as a string. */
        char code [STRING_SIZE];

    } data_item_t;
    
    
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
        int get_hash_code(int key); 

      @Summary
        hashing function for indexing in hash table.

      @Description
        This function calculates the index of an item in a hash table ADT based 
        on the key and the size of the table. The index is the remainder of the 
        key divided by the table size.

      @Precondition
        None

      @Parameters
        @param key This represents the key member of the data item struct that is
                   unique to a value.

    @Returns
        Integer 
     */
    
    int
    get_hash_code(int key);
    
 
    // *****************************************************************************
    /**
      @Function
        struct 
        data_item_t *search(int key, struct data_item_t *hash_array[TABLE_SIZE]); 

      @Summary
        search a data item in the hash table.

      @Description
        This function searches for a data item in the hash table using its key. 
        The function uses the key to get the hash index. This index is used to 
        traverse the table until the key is found. If the key is found, it returns 
        the data item at that index. Otherwise it returns NULL.

      @Precondition
        The hash table should have data items to search through

      @Parameters
        @param key: This represents the key member of the data item to search for.
     
        @param hash table: This is an array of data_item_t structs.

    @Returns
        data_item_t 
     */
    struct 
    data_item_t *search(int key, struct data_item_t *hash_array[TABLE_SIZE]);
    
    // *****************************************************************************
    /**
      @Function
        void 
        insert(int key,char data[], struct data_item_t *hash_array[TABLE_SIZE]);

      @Summary
        insert a data item in the hash table. 

      @Description
        This function inserts a data_item_t struct into the hash table. The 
        function creates a data_item_t struct using the passed in data members.
        It then gets the hash index from the key and uses it to insert the 
        data_item_t into an empty cell or a all with dummy data (with value of -1).

      @Precondition
        None

      @Parameters
        @param key: This represents the key member of the data item to search for.
     
        @param hash table: This is an array of data_item_t structs.
     
        @param data: This is an array of string to be set as data member
               of data_item_t struct.

    @Returns
        data_item_t 
     */
    void 
    insert(int key,char data[], struct data_item_t *hash_array[TABLE_SIZE]);
    
    
    /** delete a data item in the hash table **/
    struct
    data_item_t *delete_data_item(struct data_item_t* item, struct data_item_t *hash_array[TABLE_SIZE]);
    
    




//#endif /* _EXAMPLE_FILE_NAME_H */

/* *****************************************************************************
 End of File
 */
