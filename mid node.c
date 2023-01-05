#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct NodeOperation
{
    void add(struct Node** head_ref, int new_data)
    {
        struct Node* new_node = new Node();
        new_node->data = new_data;
        new_node->next = (*head_ref);
    }
    void node(struct Node* head)
    {
        while (head != NULL)
            {
                printf("%d  ",head->data);
                head=head->next;
            }
    }
    int getLen(struct Node* head)
    {
        int len = 0;
        struct Node* temp = head;
        while (temp)
        {
            len++;
            temp = temp->next;
        }
        return len;
    }
    void printmid(struct Node* head)
    {
        if (head)
        {
            int len = getLen(head);
            struct Node* temp = head;
            int midIdx = len / 2;
            while (midIdx--)
            {
                temp = temp->next;
            }
            printf("Mid element is:%d  ",temp->data);
        }
    }
};
int main()
{
    struct Node* head = NULL;
    struct NodeOperation* temp = new NodeOperation();
    for (int i = 5; i > 0; i--) {
        temp->add(&head, i);
        temp->add(head);
        temp->printmid(head);
    }
    return 0;
}
