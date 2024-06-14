#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node* insertFront(struct Node *root,struct Node *newNode,int x){
    newNode->data=x;
    newNode->next=root;
    return newNode;
}

int main(){
    struct Node *head=NULL;
    head=(struct Node *)malloc(sizeof(struct Node));
    
    return 0;
}