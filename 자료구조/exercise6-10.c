#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start=NULL;

struct node *create_hll(struct node* start)
{
    int num;
    struct node *new_node, *ptr;

    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->next=NULL;
    start=new_node;
    ptr=start;
    printf("Enter data:");
    scanf("%d",&num);
    while(num!=-1)
    {
        new_node = (struct node*)malloc(sizeof(struct node));
        new_node->data=num;
        while(ptr->next!=NULL) ptr=ptr->next;
        ptr->next = new_node;
        new_node->next=NULL;
        printf("Enter data:");
        scanf("%d",&num);      
    }
    return start;
}

void print_node(struct node *start)
{
    struct node *ptr;
    ptr=start->next;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}

struct node *delete_first_node(struct node *start)
{
    struct node *ptr;
    ptr=start->next;
    start->next=ptr->next;
    free(ptr);
    return start;
}

struct node *delete_last_node(struct node *start)
{
    struct node *ptr=start,*ptrtemp;
    while(ptr->next->next!=NULL) ptr=ptr->next;
    ptrtemp=ptr->next;
    ptr->next=NULL;
    free(ptrtemp);
    return start;
}

struct node *delete_node(struct node *start,int value)
{
    struct node *ptr1=start->next,*ptr2=start;
    
    while(ptr1->data!=value)
    {
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    ptr2->next=ptr1->next;
    free(ptr1);

    return start;
}

int main()
{
    int val;
    struct node *ptr;
    start=create_hll(start);
    print_node(start);

    printf("Delete First Node\n");
    start=delete_first_node(start);
    print_node(start);
    printf("Delete Last Node\n");
    start=delete_last_node(start);
    print_node(start);
    printf("Delete Middle Node\n");
    printf("Enter item to delete:");
    scanf("%d",&val);
    start=delete_node(start,val);
    print_node(start);
    
    return 0;
}