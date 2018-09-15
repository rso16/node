#include "node.h" 

node *createNode(uint8_t data)
{
    node *newNode = malloc(sizeof(node));
    newNode->data = data;
    return newNode;
}

void setNext(node *currentNode, node *nextNode)
{
    currentNode->next = nextNode;
}

void removeHead()
{
    
}


