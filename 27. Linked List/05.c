// insert in position i in Linked List.

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *insertNode(struct Node *head, int x, int pos)
{
    if (pos < 1)
    {
        return head;
    }
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = NULL;
    if (head == NULL)
    {
        return newNode;
    }
    else if (pos == 1)
    {
        newNode->next = head;
        return newNode;
    }
    struct Node *curr = head;
    int count = 2;
    while (curr->next != NULL)
    {
        if (count == pos)
        {
            break;
        }
        count++;
        curr = curr->next;
    }
    newNode->next = curr->next;
    curr->next = newNode;
    return head;
}

void traverseList(struct Node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
    return;
}

int main()
{
    struct Node *head=NULL;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        head = insertNode(head, x, i + 1);
    }
    traverseList(head);
    int x,pos;
    scanf("%d %d",&x,&pos);
    head=insertNode(head,x,pos);
    traverseList(head);
    return 0;
}