#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>


int main(){

    int counter = 0 ;
    LinkedList list =  LinkedList(counter);
    printf("add(1): %d\n",list.add(1));
    printf("add(2): %d\n",list.add(2));
    printf("add(3): %d\n",list.add(3));
    printf("add(4): %d\n",list.add(4));
    
    printf("\n");

    printf("find(0): %d\n",list.find(0));
    printf("find(1): %d\n",list.find(1));
    printf("find(2): %d\n",list.find(2));
    printf("find(3): %d\n",list.find(3));
    printf("find(4): %d\n",list.find(4));
    printf("find(5): %d\n",list.find(5));

    printf("\n");

    printf("popValue(1): %d\n", list.popValue(1));
    printf("popValue(3): %d\n", list.popValue(3));
    
    printf("\n");

    return !list.freeMemory();
}