#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int size;
    printf("please enter the size of array");
    scanf("%i",&size);
    printf("\n");
    ptr = malloc(size*sizeof(int));
    for(int i=0;i<size;i++)
    {
        scanf("%i",&ptr[i]);

    }
            printf("\n");

 for(int i=0;i<size;i++)
    {
        printf("%i\n",ptr[i]);
    }


    return 0;
}
