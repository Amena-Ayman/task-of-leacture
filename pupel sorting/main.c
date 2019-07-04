#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  y,i,j,*ptr,temp;
    int  a[8]={5,7,3,6,4,2,8,1};

    for(i=0;i<8-1;i++)
    {
        for(j=0;j<8-i;j++)
        {
            if(*ptr>*(ptr+1))
            {
                temp=*ptr;
                *ptr=*(ptr+1);
                *(ptr+1)=temp;
            }
            ptr++;
        }
        ptr=a;
    }
    ptr=a;
    for(y=0;y<8;y++)
    {
       printf("%i",ptr[y]);
    }

    return 0;
}
