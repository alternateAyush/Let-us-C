// traverse linked list

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *insertNode(struct Node *head,int x){
    struct Node *newNode=(struct Node *)malloc(sizeof(struct Node));
    newNode->data=x;
    newNode->next=NULL;
    if(head==NULL){
        return newNode;
    }
    newNode->next=head;
    return newNode;
}

void traverseList(struct Node *head){
    while(head!=NULL){
        printf("%d ",head->data);
        head=head->next;
    }
    printf("\n");
    return;
}


int main(){
    struct Node *head=NULL;
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        int x;
        scanf("%d",&x);
        head=insertNode(head,x);
    }
    traverseList(head);
    printf("%d ",head->data);
    return 0;
}