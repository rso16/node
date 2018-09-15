#include "node.h" 

node *createNode(uint8_t data)
{
    node *newNode = malloc(sizeof(node));
    newNode->data = data;
    return newNode;
}


