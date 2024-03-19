#include <stdio.h>
#include <stdlib.h>

#include "list.h"


List list_value(size_t capacity, size_t item_size);

void list_drop(List* self);

size_t list_length(List* self);

const void* list_items(const List* self);

void* ref_list(const List* self, size_t index);

void get_list(const List* self, size_t index, void* out);

void set_list(List* self, size_t index, const void* value);



