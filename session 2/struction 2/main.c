#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node*next;

};


int main()
{

   struct node n1,n2,n3,n4;
   n1.next=&n2;
   n1.next-> data=10;


   printf("n2=%i",n2.data);
    return 0;
}
