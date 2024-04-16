#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start=NULL;

struct node *create_cll(struct node* start)
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
            new_node->next=new_node;
            start=new_node;
        }
        else
        {
            ptr=start;
            while(ptr->next!=start) ptr=ptr->next;
            ptr->next = new_node;
            new_node->next=start;
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
    struct node *new_start=NULL,*ptr,*new_node,*new_ptr;
    printf("Create new Circular Linked List\n");
    start=create_cll(start);
    print_node(start);
    printf("Copied Circular Linked List\n");
    ptr=start;
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data=ptr->data;
    new_node->next=new_node;
    new_start=new_node;
    new_ptr=new_start;
    ptr=ptr->next;
    while(ptr!=start)
    {
        new_node = (struct node*)malloc(sizeof(struct node));
        new_node->data=ptr->data;
        new_node->next=new_start;
        new_ptr->next=new_node;
        ptr=ptr->next;
        new_ptr=new_ptr->next;
    }
    print_node(new_start);
    return 0;
}