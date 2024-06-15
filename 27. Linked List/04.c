// insert Node at end of list

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *insertNode(struct Node *head,int x){
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=x;
    newNode->next=NULL;
    if(head==NULL){
        return newNode;
    }
    struct Node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=newNode;
    return head;
}

void traverseList(struct Node *head){
    while(head!=NULL){
        printf("%d ",head->data);
        head=head->next;
    }
    return;
}

int main(){
    int n;
    scanf("%d",&n);
    struct Node *head=NULL;
    for(int i=0; i<n; i++){
        int x;
        scanf("%d",&x);
        head=insertNode(head,x);
    }
    traverseList(head);
    printf("\n%d",head->data);
    return 0;
}