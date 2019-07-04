#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,op;
    printf("enter the value");
    scanf("%i",&x);

    printf("enter the value");
    scanf("%i",&y);

    printf("enter the operator");
    scanf("%i",&op);

    switch (op)
    {
    case '+' :
    z=x+y;
    printf("%i",z);
    break ;

    case '-' :
    z=x-y;
    printf("%i",z);
    break ;

    case '*' :
    z=x*y;
    printf("%i",z);
    break ;

    case '/' :
    z=x/y;
    printf("%i",z);
    break ;

    }

    return 0;
}
