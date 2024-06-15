// delete from front.
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
    printf("\n");
    return;
}

struct Node *deleteNode(struct Node *head){
    if(head==NULL){
        return NULL;
    }
    struct Node *temp=head;
    head=head->next;
    free(head);
    return head;
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
    head=deleteNode(head);
    return 0;
}