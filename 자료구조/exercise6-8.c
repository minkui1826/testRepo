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
            new_node->next=start;
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
}

int main()
{
    start = create_dcll(start);
    print_node(start);
    return 0;
}