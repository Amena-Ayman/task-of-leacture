#include <stdio.h>
#include <stdlib.h>

int main()
{
   int s;
   s=1;
 int  x=12;
 int  y=6;
 int z;
 printf("please enter 1 for sum,2 for sub,3 for mul,4 for dev");
 scanf("%i",&s);
   if(s==1)
   {
    z=x+y;
   }
   else if(s==2)
   {
    z=x-y;
   }
    else if(s==3)
   {
    z=x*y;
   }
    else if(s==4)
   {
    z=x/y;
   }
   printf("the value of z=%i",z);
    return 0;
}
