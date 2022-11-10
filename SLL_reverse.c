#include <stdio.h>  
#include <stdlib.h>  

struct node{ 
  int data;
  struct node *link;
};

struct node* reverse(struct node *head)
{
    struct node *prev=NULL;
    struct node *next=NULL;
    while(head!=NULL)
    {
        next=head->link;
        head->link=prev;
        prev=head;
        head=next;
    }
    head=prev;
    return head;
}

int main()
{
    struct node *head = malloc(sizeof(struct node)); 
    head->data=45; 
    head->link=NULL;
    
    struct node *temp2 = malloc(sizeof(struct node));
    temp2->data=98; 
    temp2->link=NULL;
    head->link=temp2;
    
    temp2 = malloc(sizeof(struct node));
    temp2->data=3; 
    temp2->link=NULL;
    head->link->link=temp2;
    
    head=reverse(head);
    temp2=head;
    while(temp2!=NULL)
    {
        printf("%d ",temp2->data);
        temp2=temp2->link;
    }
    
    return 0;
}
