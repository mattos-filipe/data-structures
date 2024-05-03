#ifndef STACK_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    Node* next;
    int value;
}Node;

typedef struct Stack{
    Node* head;
    
    Stack(){
        this->head = NULL;
    }

    void add(int value){
        Node* node = (Node*) malloc(sizeof(Node));
        node->value = value;
        node->next = head;
        this->head = node;
    }

    void print(){
        int i = 0;
        Node* current = this->head;
        while( current != NULL){
            printf("%d: value = %d\n", i++, current->value);
            current = current->next;
        }
    }

    int pop(){
        Node* dead = this->head;
        this->head = dead->next;

        int v = dead->value;
        free(dead);
        return v;
    }




}Stack;

#endif // !STACK_H