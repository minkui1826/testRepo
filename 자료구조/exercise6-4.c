#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start=NULL;

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

int main()
{
    struct node *ptr;
    int count=0;
    start=create_ll(start);
    ptr=start;
    while(ptr!=NULL)
    {
        if(ptr->data!=0) count++;
        ptr=ptr->next;
    }
    printf("Number of non-zero elements:%d",count);
    return 0;
}