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
    int position=2;
    del_pos(&head,position);
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d",ptr->data);
        ptr=ptr->link;
    }
    return 0;
}
void del_pos(struct node **head,int position)
{
    struct node *prev=*head;
    struct node *current=*head;
    if(*head==NULL)
    {
        printf("list is full");
    }
    else if(position==1)
    {
        *head=current->link;
        free(current);
        current=NULL;
    }
        else
        {
            while(position!=1)
            {
                prev=current;
                current=current->link;
                position--;
            }
            prev->link=current->link;
            free(current);
            current=NULL;
        }
}

