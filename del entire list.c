#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *link;
};
int main()
{
    struct node *head=malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;
    struct node *ptr=malloc(sizeof(struct node));
    ptr->data=98;
    ptr->link=NULL;
    head->link=ptr;
    head=del_list(head);
    if(head==NULL)
    {
        printf("list deleted");

    }
    return 0;
}
void del_list(struct node *head)
{
        struct node *temp=head;
        while(temp!=NULL)
        {
            temp=temp->link;
            free(temp);
            head=temp;
        }
        return head;
}
