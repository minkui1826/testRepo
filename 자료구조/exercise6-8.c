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

int main()
{
    struct node *ptr_1, *ptr_2;
    int temp;
    start = create_dcll(start);
    ptr_1=start;
    ptr_2=ptr_1->next;
    while(ptr_1->next!=start)
    {
        while(ptr_2!=start)
        {
            if(ptr_1->data > ptr_2->data)
            {
                temp = ptr_1->data;
                ptr_1->data=ptr_2->data;
                ptr_2->data=temp;
            }
            ptr_2=ptr_2->next;
        }
        ptr_1=ptr_1->next;
        ptr_2=ptr_1->next;
    }
    print_node(start);
    return 0;
}