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
    head=del_last(head);
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d",ptr->data);
        ptr=ptr->link;
    }
    return 0;
}
del_last(struct node *head)
{
    if(head==NULL)
    {
        printf("list is empty");
    }
    else if(head->link=NULL)
    {
        free(head);
        head=NULL;
    }
    else
    {
        struct node *temp=head;
        struct node *temp2=head;
        while(temp->link!=NULL)
        {
            temp2=temp;
            temp-temp->link;
        }
        temp2->link=NULL;
        free(temp);
        temp=NULL;
    }
    return head;
}
