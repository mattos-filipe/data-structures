#include "queue.h"
#include <stdio.h>

int main(){
    Queue q = Queue();

    q.add(0);
    q.add(1);
    q.add(2);
    q.add(3);
    q.add(4);

    q.pop();
    q.pop();
    q.print();

    return 0 ;
}