#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
void add(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
void node(struct Node* head)
{
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d  ", temp->data);
        temp = temp->next;
    }
}
void delnode(struct Node* node)
{
    struct Node* prev;
    if (node == NULL)
        return;
    else {
        while (node->next != NULL) {
            node->data = node->next->data;
            prev = node;
            node = node->next;
        }
        prev->next = NULL;
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
    printf("Before deleting\n");
    node(head);
    delnode(head);
    printf("\nAfter deleting\n");
    node(head);
    getchar();
    return 0;
}
