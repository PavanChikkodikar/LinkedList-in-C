#include <stdio.h>  
#include <stdlib.h>  

struct node{ 
  int data;
  struct node *link;
};

struct node* delete_list(struct node *head)
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        temp=temp->link;
        free(head);
        head=temp;
    }
    return head;
}

int main()
{
    struct node *head = malloc(sizeof(struct node)); 
    head->data=45; 
    head->link=NULL;
    
    struct node *temp = malloc(sizeof(struct node));
    temp->data=98; 
    temp->link=NULL;
    head->link=temp;
    
    temp = malloc(sizeof(struct node));
    temp->data=3; 
    temp->link=NULL;
    head->link->link=temp;
    
    head=delete_list(head);
    if(head==NULL)
        printf("Linked list deleted succesfully");
    return 0;
}
