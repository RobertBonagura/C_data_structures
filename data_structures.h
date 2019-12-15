#ifndef DATA_STRUCTURES_H
#define DATA_STRUCTURES_H

#include <stdlib.h>
#include <stdio.h>

// Structs
typedef struct _Node {
    int number;
    char* str;
} Node;

typedef struct _Linked_List {
    struct _Linked_List *next; 
    struct _Linked_List *prev;
    Node *data;
    int size;
} Linked_List;


// Function Prototypes
Linked_List *gen_list();
int add(Linked_List *list, Node *node);
void show(Linked_List* list);

#endif
