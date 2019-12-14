#include "data_structures.h"

// Function Definitions
*Linked_List gen_list(){
    Linked_List list = malloc(sizeof(Linked_List));
    Linked_List* list_ptr = &list;
    return list_ptr;
}