
#include <stdio.h>  //standard input output
#include <stdlib.h>  //for calling malloc function

struct node{ //structure
  int data;
  struct node *link;
};

int main()
{
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node)); //storing the adress
    
    head->data=45; //for accessing the data
    head->link=NULL;
    
    printf("%d", head->data);

    return 0;
}
