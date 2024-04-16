#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start=NULL;
struct node *start_2=NULL;

struct node *create_ll(struct node* start)
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
            new_node->next=NULL;
            start=new_node;
            ptr=start;
        }
        else
        {
            while(ptr->next!=NULL) ptr=ptr->next;
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

struct node *sort_ll(struct node *start)
{
    struct node *ptr1,*ptr2;
    int temp;
    ptr1=start;
    ptr2=ptr1->next;
    while(ptr1->next!=NULL)
    {
        while(ptr2!=NULL)
        {
            if(ptr1->data > ptr2->data)
            {
                temp=ptr1->data;
                ptr1->data=ptr2->data;
                ptr2->data=temp;
            }
            ptr2=ptr2->next;
        }
        ptr1=ptr1->next;
        ptr2=ptr1->next;
    }
    return start;
}

int main()
{
    struct node *ptr;
    printf("Create Linked List 1\n");
    start=create_ll(start);
    printf("Create Linked List 2\n");
    start_2=create_ll(start_2);
    start=sort_ll(start);
    start_2=sort_ll(start_2);
    printf("Sorted Linked List 1\n");
    print_node(start);
    printf("Sorted Linked List 2\n");
    print_node(start_2);

    ptr=start;
    while(ptr->next!=NULL) ptr=ptr->next;
    ptr->next=start_2;
    start=sort_ll(start);
    printf("Merged Linked List\n");
    print_node(start);
    return 0;
}