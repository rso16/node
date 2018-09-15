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
         node *newHead = list->head->next;
         free(list->head);
         list->head = newHead;
        }
        else
        {

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
    node *currentNode = list->head;
    int counter = 0;
    while(currentNode != NULL)
    {
        printf("node %d = %d\n", counter, currentNode->data);
        counter++;
        currentNode = currentNode->next;
    }
}
