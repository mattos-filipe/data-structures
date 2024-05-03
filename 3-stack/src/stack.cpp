#include "stack.h"
#include <stdio.h>

int main(){
    Stack stack = Stack();

    stack.add(0);
    stack.add(1);
    stack.add(2);
    stack.add(3);
    stack.add(4);

    printf("Popping values, %d\n", stack.pop());//4
    printf("Popping values, %d\n", stack.pop());//3

    stack.print();
    //2,1,0

    return 0;
}