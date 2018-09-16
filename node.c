#include "node.h" 

node *createNode(uint8_t data)
{
    node *newNode = malloc(sizeof(node));
    newNode->data = data;
    return newNode;
}

void setNextNode(node *currentNode, node *nextNode)
{
    currentNode->next = nextNode;
}

void addHeadToList(nodeList *list, node* newHead)
{
    list->head = newHead;
}

void removeHeadFromList(nodeList *list)
{
    //check if head exist
    if(list->head != NULL)
    {
        //check if there is a next node
        if(list->head->next != NULL)
        {
            printf("test head has next\n");
            node *newHead = list->head->next;
            free(list->head);
            list->head = newHead;
        }
        else
        {
            free(list->head);
            list->head = NULL;
        }

    }
    else
    {
        printf("No head\n");
        return;
    }

}

void printList(nodeList *list)
{
    if(list->head != NULL)
    {
        printf("test\n");
        node *currentNode = list->head;
        int counter = 0;
        while(currentNode != NULL)
        {
            printf("node %d = %d\n", counter, currentNode->data);
            counter++;
            currentNode = currentNode->next;
        }
    }
}

void printNode(node *currentNode)
{
    if(currentNode != NULL)
    {
        printf("data = %d\n", currentNode);
    }
    else
    {
        printf("error node is NULL\n");
    }
}


