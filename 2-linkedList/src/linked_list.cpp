#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>


int main(){

    int counter = 0 ;
    LinkedList list =  LinkedList(counter);
    list.add(1);
    list.add(2);
    list.add(3);
    list.add(4);

    printf("find(0): %d\n",list.find(0));
    printf("find(1): %d\n",list.find(1));
    printf("find(2): %d\n",list.find(2));
    printf("find(3): %d\n",list.find(3));
    printf("find(4): %d\n",list.find(4));
    printf("find(5): %d\n",list.find(5));



    return list.freeMemory();
    return 0;
}