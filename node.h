#ifndef NODE_H
#define NODE_H
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct Node
{
    uint8_t data;
    struct Node *next;
}node;

typedef struct NodeList
{
    struct Node *head;
    struct Node *tail;
}nodeList;

node * createNode(uint8_t data);
void setNextNode(node *currentNode, node *nextNode);
void addHeadToList(nodeList *list, node* newHead);
void removeHeadFromList(nodeList *list);
void addNodeToTail(nodeList *list, node *newTail);
void addToTail(nodeList *list, uint8_t data);
void printNode(node *currentNode);
void printList(nodeList *list);

#endif
