#include <stdio.h>
#include <stdlib.h>

#define  add      (x,y)  (x+y)
#define  sub      (x,y)  (x-y)
#define  mul      (x,y)  (x*y)

int addition(int x,int y)
    {
        return add(x,y);
    }

    int subtraction(int x,int y)
    {
        return sub(x,y);
    }

    int multeplcation(int x,int y)
    {
        return mul(x,y);
    }

int main()
{
    printf("please enter first number");
    scanf("%i",&x);

    printf("please enter second number");
    scanf("%i",&y);

    addition();
    subtraction();
    multeplcation();

    printf("%i",add);


    return 0;
}
