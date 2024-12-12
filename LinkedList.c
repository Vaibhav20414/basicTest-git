#include <stdio.h>
#include <stdlib.h>

typedef struct LinkedList{
    int data;
    struct LinkedList* next;
}node;

node* getNode(int info){
    node* new_node = malloc(sizeof(node));
    new_node -> data = info;
    new_node -> next = NULL;

    return new_node;
}

