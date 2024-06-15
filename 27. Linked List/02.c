// insert node from front.
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *insertNode(struct Node *head, int x)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = NULL;
    if (head == NULL)
    {
        return newNode;
    }
    newNode->next = head;
    return newNode;
}

int main()
{
    struct Node *head = NULL;
    head = insertNode(head, 3);
    printf("%d ", head->data);
    return 0;
}