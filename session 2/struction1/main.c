#include <stdio.h>
#include <stdlib.h>

struct cat
{
    int age;

   char mat;
};

int main()
{
    struct cat mat;
   mat.age=2;

    printf("mat.age=%i",mat.age);

    return 0;
}
