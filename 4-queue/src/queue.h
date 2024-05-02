#ifndef QUEUE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    node* next;
    int value;
}node;

struct Queue{

    node* head;
    node* tail;
    int size;

    Queue(){
        this->head = NULL;
        this->tail = NULL;
    }

    bool add(int value){
        node* newNode = (node*) malloc(sizeof(node));
        newNode->value = value;
        newNode->next = NULL;

        if(this->tail == NULL){//empty queue
            this->head = newNode;
            this->tail = newNode;
        }else{
            this->tail->next = newNode;
            this->tail = newNode;
        }
        (this->size)++;
    }

    int pop(){
        node* dead = this->head;
        this->head = dead->next;
        int returnValue = dead->value;
        if( this->head == NULL)
            this->tail = NULL;
        free(dead);
        (this->size)--;
        return returnValue;

    }

    void print(){
        int i = 0;
        node* current = this->head;
        while(current != NULL){
            printf("queue[%d] = %d\n", i++, current->value);
            current = current->next;
        }
    }
};



#endif //QUEUE_H