#ifndef LINKED_LIST_H
#define LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node node;

struct node{
    int value;    
    node* next;
};

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
        newNode->next = NULL;

        current->next = newNode;
        return true;
    }

    int pop(int value){
        return 1;
    }

    bool find(int value){
        node* current;
        if(this->head == NULL)
            return false;

        if(this->head->value == value)
            return true;
        
        current = this->head->next;
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
