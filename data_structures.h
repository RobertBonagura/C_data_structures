#ifndef DATA_STRUCTURES_H
#define DATA_STRUCTURES_H

// Structs
typedef struct _Linked_List {
    _Linked_List *next; 
    _Linked_List *prev;
    Node* data;
    int size;
} Linked_List;

typedef struct _Node {
    int number;
    char* string;
} Node;

// Function Prototypes
*Linked_List gen_list();

#endif