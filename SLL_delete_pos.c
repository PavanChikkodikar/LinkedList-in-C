#include <stdio.h>  
#include <stdlib.h>  

struct node{ 
  int data;
  struct node *link;
};

void delete_position(struct node **head,int pos)
{
    struct node *current=*head;
    struct node *previous=*head;
    if(*head == NULL)
        printf("List is already empty");
    else if(pos==1)
    {
        *head=current->link;
        free(current);
        current=NULL;
    }
    else{
        while(pos!=1)
        {
            previous=current;
            current=current->link;
            pos--;
        }
        previous->link=current->link;
        free(current);
        current=NULL;
    }
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
    
    struct node *previous = malloc(sizeof(struct node));
    previous = malloc(sizeof(struct node));
    previous->data=3; 
    previous->link=NULL;
    head->link->link=previous;
    
    int pos=2;
    delete_position(&head,pos);
    previous=head;
    while(previous!=NULL)
    {
        printf("%d ",previous->data);
        previous=previous->link;
    }
    return 0;
}
