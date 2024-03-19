#ifndef dynamic_array
#define dynamic_array


#include <stdlib.h>


/*
    * List - a dynamicly growable array of any type.
*/


/*
    * List struct is a "thick pointer"
    * users should not access these pointers directly.
    * instead use the operation exposed in the functions bellow.
*/
typedef struct{
    const size_t item_size  /* size of an item in bytes */
    int length;             /* how many item are in the list */
    int capacity;           /* number of items buffer can store */
    void* buffer;           /* heap memory storing the buffer */
}List;


List list_value(size_t capacity, size_t item_size);

void list_drop(List* self);

size_t list_length(List* self);

const void* list_items(const List* self);

void* ref_list(const List* self, size_t index);

void get_list(const List* self, size_t index, void* out);

void set_list(List* self, size_t index, const void* value);


#endif