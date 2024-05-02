#ifndef LINKED_LIST_H
#define LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>


// typedef struct node node;

typedef struct node{
    int value;    
    node* next;
}node;

struct LinkedList{
    node* head;
    LinkedList(){
        //TODO:  pesquisar  se nesse caso o novo node tem next = null
        this->head = (node*) malloc(sizeof(node));    
        this->head->value = NULL;
    }    

    LinkedList(int initialValue){
        this->head = (node*) malloc(sizeof(node));    
        this->head->value = initialValue;
    }

    bool add(int newValue){
        //TODO: check if the HEAD IS NULL
        node* current;
        
        current = this->head;

        while(current->next != NULL){
            current = current->next;
        }        
        node* newNode = (node*) malloc(sizeof(node));
        newNode->value = newValue;

        current->next = newNode;
        return true;
    }

    bool popValue(int value){
        node* previous = NULL;
        node* current = this->head;

        while( current != NULL ){
            if( current->value == value){
                if(previous != NULL)
                    previous->next = current->next;
                free(current);
                return true;
            }
            previous = current;
            current = current->next;
        }

        return false;
    }

    bool find(int value){
        //TODO IMPROVE CODE
        node* current;
        current = this->head;
        
        while( current != NULL){
            if(current->value == value)
                return true;
            current = current->next;            
        }
        return false;
    }

    bool freeMemory(){
        node* current = this->head;
        node* next;

        while(current != NULL){
            printf("Freeing allocated memory of node.value = %d\n", current->value);
            next = current->next;
            free(current);
            current = next;
        }
        return true;
    }
};

#endif
