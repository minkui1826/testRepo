#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *start=NULL;

struct node *create_dll(struct node* start)
{
    int num;
    struct node *new_node, *ptr;

    printf("Enter data:");
    scanf("%d",&num);
    while(num!=-1)
    {
        new_node = (struct node*)malloc(sizeof(struct node));
        new_node->data=num;
        if(start==NULL)
        {
            new_node->prev=NULL;
            new_node->next=NULL;
            start=new_node;
        }
        else
        {
            ptr=start;
            while(ptr->next!=NULL) ptr=ptr->next;
            new_node->prev=ptr;
            ptr->next = new_node;
            new_node->next=NULL;
        }
        printf("Enter data:");
        scanf("%d",&num);      
    }
    return start;
}

void print_node(struct node *start)
{
    struct node *ptr;
    ptr=start;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}

struct node *move_to_top(struct node *start,int value)
{
    struct node *ptr,*ptr_next=NULL,*ptr_prev=NULL;
    ptr=start;
    while(ptr->data!=value) ptr=ptr->next;
    if(ptr->next!=NULL) ptr_next=ptr->next;
    if(ptr->prev==NULL) return start;
    if(ptr_next!=NULL)
    {
        ptr_prev=ptr->prev;
        ptr_prev->next=ptr_next;
        ptr_next->prev-ptr_prev;
        ptr->prev=NULL;
        ptr->next=start;
        start->prev=ptr;
        start=ptr;
    }
    else
    {
        ptr_prev=ptr->prev;
        ptr_prev->next=NULL;
        ptr->prev=NULL;
        ptr->next=start;
        start->prev=ptr;
        start=ptr;
    }
    return start;
}

int main()
{
    int item;
    start=create_dll(start);
    print_node(start);

    printf("Enter Item to move:");
    scanf("%d",&item);
    start=move_to_top(start,item);
    print_node(start);
    return 0;
}
