#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
void add(struct Node** head_ref, int new_data)
{
    struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
int node(struct Node* head, int index)
{
    struct Node* current = head;
    int count = 0;
    while (current != NULL)
    {
        if (count == index)
            return (current->data);
        count++;
        current = current->next;
    }
}
int main()
{
    struct Node* head = NULL;
    add(&head,10);
    add(&head,20);
    add(&head,30);
    add(&head,40);
    add(&head,50);
    printf("index 3 element is %d",node(head,40));
    getchar();
}
