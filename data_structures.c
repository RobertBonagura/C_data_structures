#include "data_structures.h"

// Function Definitions
Linked_List* gen_list(){
    
    Linked_List* list_ptr = malloc(sizeof(Linked_List));
    list_ptr->next = NULL;  
    list_ptr->prev = NULL;
    list_ptr->data = NULL;
    list_ptr->size = 0;
    
    return list_ptr;
}

int add(Linked_List *list, Node *node){

    Linked_List* cur_list = list;
    while (cur_list->data){
        cur_list->prev = cur_list;
        cur_list = cur_list->next;
    }
    cur_list->data = node;
    cur_list->next = malloc(sizeof(node));
    cur_list->next->prev = cur_list;

    list->size++;
    return 1;
    
}

void show(Linked_List* list){

    Linked_List *cur_list = list;
    printf("The Linked List has %d nodes:\n\n", list->size);

    int i = 0;
    while (cur_list->data){
        printf("Node %d: %s\n", i, cur_list->data->str);
	cur_list = cur_list->next;
	i++;
    }
}

