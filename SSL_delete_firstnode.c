#include <stdio.h>  
#include <stdlib.h>  

struct node{ 
  int data;
  struct node *link;
};

struct node* delete_first(struct node *head)
{
    if(head == NULL)
        printf("List is already empty");
    else
    {
        struct node *temp=head;
        head=head->link;
        free(temp);
    }
    return head;
}

int main()
{
    struct node *head = malloc(sizeof(struct node)); 
    head->data=45; 
    head->link=NULL;
    
    struct node *current = malloc(sizeof(struct node));
    current->data=98; 
    current->link=NULL;
    head->link=current;
    
    current = malloc(sizeof(struct node));
    current->data=3; 
    current->link=NULL;
    head->link->link=current;
    
    head=delete_first(head);
    current=head;
    while(current!=NULL)
    {
        printf("%d ", current->data);
        current=current->link;
    }
  
    return 0;
}
