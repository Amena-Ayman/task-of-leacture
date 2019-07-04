#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next_node
} *head=NULL;

void ll_Init(void)
{
    head=(struct node*)malloc(sizeof(struct node));
    head->next_node=NULL;
    printf("please enter the first node value");
    scanf("%i",&head->data);
}

void ll_creat_new_node (void)
{
    struct node*image_ptr;
    image_ptr=head;
    for(;;)
    {
        if(image_ptr->next_node==NULL)
        {
          break;
        }
        image_ptr=image_ptr->next_node;
    }


image_ptr->next_node=(struct node*)malloc(sizeof(struct node));
image_ptr->next_node->next_node=NULL;
printf("\n please enter the data of the node");
scanf("%i",&image_ptr->next_node->data);
printf("\n");
}
int main()
{
    ll_Init();
    printf("\n the value of first node %i",head->data);
    printf("\n\n\n\n");

    ll_creat_new_node();
    ll_creat_new_node();
    ll_creat_new_node();
    ll_creat_new_node();



    printf("\n the value of second node %i",head->next_node->data);
    printf("\n the value of third node %i",head->next_node->next_node->data);
    printf("\n the value of fourth node %i",head->next_node->next_node->next_node->data);
    printf("\n the value of fifth node %i",head->next_node->next_node->next_node->next_node->data);
    return 0;
}
