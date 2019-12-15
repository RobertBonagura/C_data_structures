#include <stdlib.h>
#include <stdio.h>
#include "data_structures.h"

int main(int argc, char *argv[]){

    printf("Hello World\n");

    Linked_List *list = gen_list();

    Node *node1 = malloc(sizeof(Node));
    Node *node2 = malloc(sizeof(Node));
    Node *node3 = malloc(sizeof(Node));
    Node *node4 = malloc(sizeof(Node));
    Node *node5 = malloc(sizeof(Node));

    node1->str = "First";
    node2->str = "Second";
    node3->str = "Thirsty thirdly";
    node4->str = "May the fourth be with you";
    node5->str = "Fifth";

    add(list, node1);
    add(list, node2);
    add(list, node3);
    add(list, node4);
    add(list, node5);

    show(list);

    return 1;
}
