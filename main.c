#include "node.h"

node  *node1,*node2, *node3;
nodeList *list;
int main(int argc, char *argv[])
{
    	list = malloc(sizeof(nodeList));
	addStrToList(list, "test123 print 12345");
	char str[100]={};
	int err = listToStr(list,str, 0, 10); 
    	printf("test2\n");
	printf("error = %d\n", err);
	printf("list size  = %d\n", list->size);
	printf("str = %s\n", str); 
//	printList(list);
    return 0;
}
