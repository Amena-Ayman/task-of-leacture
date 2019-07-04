#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,l1=0,l2=0,l3=0,l4=0,a=0,b=n,c=1;
    printf("please enter num ");
    scanf("%i",&n);
    while(l1<n)
    {
        l1++;
        printf(" num1=%i",l1);


    }
    printf("\n");
    for(l2=n;l2>0;l2--)
    {
         printf("num2= %i",l2);
    }
    printf("\n");

    while((b-a)!=0)
    {   l3=(b-a)+c;
        printf("num3= %i",l3);
        a++;
        c++;
    }

    return 0;

}
