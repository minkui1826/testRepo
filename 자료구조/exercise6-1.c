#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

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

struct node *delete_node(struct node *start, int value)
{
    struct node *ptr,*preptr;
    ptr=start;
    if(ptr->data==value)
    {
        start=ptr->next;
        free(ptr);
        return start;
    }
    else
    {
        ptr=ptr->next;
        preptr=start;
        while(ptr->data!=value)
        {
            preptr=ptr;
            ptr=ptr->next;
        }
        preptr->next=ptr->next;
        free(ptr);
        return start;
    }
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

int isin(int arr[],int val)
{
    for(int i=0;i<100;i++)
    {
        if(arr[i]==val) return 1;
    }
    return 0; 
}

int main()
{
    struct node *ptr;
    int arr[100];
    memset(arr,-1,100*sizeof(int));
    int j=0,i=0;
    start = create_ll(start);
    ptr=start;
    
    while(ptr!=NULL)
    {
        if(isin(arr,ptr->data)) start = delete_node(start,ptr->data);
        else arr[i++]=ptr->data;
        ptr=ptr->next;
    }
    
    print_node(start);
    return 0;

}