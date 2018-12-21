#include "node.h"

node  *node1,*node2, *node3;
nodeList *list;
nodeList *list2;
nodeListList *listList;
int main(int argc, char *argv[])
{
    	list = malloc(sizeof(nodeList));
    	list2 = malloc(sizeof(nodeList));
    	listList = malloc(sizeof(nodeListList));
	addStrToList(list, "test123 print 12345");
	addStrToList(list2, "mooie test123 print 12345");
	
	addNodeListToNodeListList(listList, list);
	addNodeListToNodeListList(listList, list2);


	char str[100]={};
	char str2[100]={};
	
	int err = listToStr(listList->head,str, 0, 10); 
	int err2 = listToStr(listList->head->next,str2, 0, 20); 
	printf("error = %d\n", err);
	printf("str = %s\n", str); 
	printf("error2 = %d\n", err2);
	printf("str2 = %s\n", str2); 
//	printList(list);
    return 0;
}
