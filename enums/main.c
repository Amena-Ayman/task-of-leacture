#include <stdio.h>
#include <stdlib.h>

enum array_state{unsorted,duringsorting,sorted}a_s;    //a_s---> array state







int main()
{
    int x,y,z,temp,*sorter;
    int d[8]={2,3,5,7,4,8,1,6};

    a_s=unsorted;

    if(a_s==0)
    {
        printf(" array is unsorted");
    }
    printf("\n");
    for(x=0;x<8-1;x++)
    {
        for(y=0;y<8-x;y++)
        {
          if(*sorter>*(sorter+1))
          {
              temp=*sorter;
           *sorter=*(sorter+1);
           *(sorter+1)= temp;
          }
            sorter++;
        }
        sorter=d;
        for(int i=0;i<8;i++)
        {
            printf("%i",sorter[i]);

        }
         a_s=duringsorting;
         if(a_s==1)
         {
             printf("\t array is still sorting");
         }
         printf("\n");
    }
     printf("\n");
    a_s=sorted;
    if(a_s==2)
    {
        printf(" array ia already sorted");
    }
    sorter=d;

    for(z=0;z<8;z++)

    {
        printf(" " "%i",sorter[z]);
    }
    return 0;
}
