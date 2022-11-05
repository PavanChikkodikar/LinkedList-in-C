#include <stdio.h>  
#include <stdlib.h>  

struct node{ 
  int data;
  struct node *link;
};

void count_of_nodes(struct node *head)
{
    int count=0; //count the no of nodes in the linked list
    if(head == NULL)
        printf("Linked List is empty");
    struct node *ptr = NULL; //creating the pointer of struct node and initialize it to null
    ptr=head; //putting the value of head in ptr
    while(ptr!=NULL)
    {
        count++;
        ptr=ptr->link;
    }
    printf("%d",count);
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
    
    count_of_nodes(head);
    return 0;
}
