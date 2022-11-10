#include <stdio.h>  
#include <stdlib.h>  

struct node{ 
  int data;
  struct node *link;
};

struct node* delete_last(struct node *head)
{
    if(head == NULL)
        printf("List is already empty");
    else if(head->link == NULL)
    {
        free(head);
        head=NULL;
    }
    else{
        struct node *temp=head;
        struct node *temp2=head;
        while(temp->link!=NULL)
        {
            temp2=temp;
            temp=temp->link;
        }
        temp2->link=NULL;
        free(temp);
        temp=NULL;
    }
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
    
    head=delete_last(head);
    temp2=head;
    while(temp2!=NULL)
    {
        printf("%d ", temp2->data);
        temp2=temp2->link;
    }
    return 0;
}
