#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *start=NULL;

struct node *create_dcll(struct node* start)
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
            new_node->next=new_node;
            start=new_node;
        }
        else
        {
            ptr=start;
            while(ptr->next!=start) ptr=ptr->next;
            new_node->prev=ptr;
            ptr->next = new_node;
            new_node->next=start;
            start->prev=new_node;
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
    while(ptr->next!=start)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    printf("%d\n",ptr->data);
}

struct node *interchange(struct node *start,int k)
{
    struct node *ptr=start,*ptr_next,*ptr_prev,*ptr_next_next;
    for(int i=0;i<k-1;i++) ptr=ptr->next;
    if(ptr->next==start)
    {
        printf("No k+1");
        return start;
    }
    if(ptr->next!=start->prev)
    {
        ptr_next=ptr->next;
        ptr_prev=ptr->prev;
        ptr_next_next=ptr_next->next;
        
    }
    else if(ptr->next==start->prev)
    {
        ptr_next=ptr->next;
        ptr_prev=ptr->prev;
        ptr_next_next=start;
    }
    ptr_prev->next=ptr_next;
    ptr->prev=ptr_next;
    ptr->next=ptr_next_next;
    ptr_next->prev=ptr_prev;
    ptr_next->next=ptr;
    ptr_next_next->prev=ptr;
    if(ptr==start) start=ptr_next;

    return start;
}

int main()
{
    int k;
    start=create_dcll(start);
    print_node(start);

    printf("Enter k:");
    scanf("%d",&k);
    start=interchange(start,k);
    print_node(start);
    return 0;
}
