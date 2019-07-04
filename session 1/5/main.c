#include <stdio.h>
#include <stdlib.h>
int add(int x,int y)
{
    int z;
    z=x+y;
}
int sub(int x,int y)
{
    int z;
    z=x-y;
}
int mul(int x,int y)
{
    int z;
    z=x*y;
}
int dev(int x,int y)
{
    int z;
    z=x/y;
}
int main()
{
    int s,x,y,z;

    printf("please enter x ");
    scanf("%i",&x);
    printf("please enter y ");
    scanf("%i",&y);
    printf("please enter 1 for sum,2 for sub,3 for mul,4 for dev");
    scanf("%i",&s);
    if(s==1)
   {
    z=add(x,y);
    printf("the value of z=%i",z);
   }
   else if(s==2)
   {
    z=sub(x,y);
    printf("the value of z=%i",z);
   }
    else if(s==3)
   {
    z=mul(x,y);
    printf("the value of z=%i",z);
   }
    else if(s==4)
   {
    z=dev(x,y);
    printf("the value of z=%i",z);
   }

}
