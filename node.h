#ifndef NODE_H
#define NODE_H
#include <stdint.h>
#include <stdlib.h>

  typedef struct Node
    {
        uint8_t data;
        struct Node *next;

    }node;

node *createNode(uint8_t data);

#endif
