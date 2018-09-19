#include "node.h"

node  *node1,*node2, *node3;
nodeList *list;
int main(int argc, char *argv[])
{
    list = malloc(sizeof(nodeList));
    printf("test blyat\n");
   for(int i = 0; i < 10000; i++)
    {
        addDataToList(list, i);
    }
    
    printList(list);
    
    node *temp = list->head;
    while(temp->next != NULL)
    {
        removeHeadFromList(list);
        temp = temp->next;
    }
    
    printList(list);
    return 0;
}
