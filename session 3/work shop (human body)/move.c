#include "headers.h"

void Robo_Init(void)
{
    int *ptr=&Right_ARM.s.volt;
    int *ptr2=&Right_ARM.s.degree;

    Right_ARM.s.volt=Initialize;
    degree_modify(&Right_ARM.s.volt,&Right_ARM.s.degree);

    Right_ARM.e.volt=Initialize;
    degree_modify(&Right_ARM.e.volt,&Right_ARM.e.degree);

    Right_ARM.w.volt=Initialize;
    degree_modify(&Right_ARM.w.volt,&Right_ARM.w.degree);

    Right_ARM.f.volt=Initialize;
    degree_modify(&Right_ARM.f.volt,&Right_ARM.f.degree);


    printf("\n Right ARM has been Initialized");

    Left_ARM.s.volt=Move_Ninety;
    degree_modify(&Left_ARM.s.volt,&Left_ARM.s.degree);

    Left_ARM.e.volt=Move_Ninety;
    degree_modify(&Left_ARM.e.volt,&Left_ARM.e.degree);

    Left_ARM.w.volt=Move_Ninety;
    degree_modify(&Left_ARM.w.volt,&Left_ARM.w.degree);

    Left_ARM.f.volt=Move_Ninety;
    degree_modify(&Left_ARM.f.volt,&Left_ARM.f.degree);

    printf("\n Left ARM has been Initialized");

    Right_LEG.w_e.volt=Move_One_Eighty;
    degree_modify(&Right_LEG.w_e.volt,&Right_LEG.w_e.degree);

    Right_LEG.k.volt=Move_One_Eighty;
    degree_modify(&Right_LEG.k.volt,&Right_LEG.k.degree);

    Right_LEG.f.volt=Move_One_Eighty;
    degree_modify(&Right_LEG.f.volt,&Right_LEG.f.degree);
    printf("\n Right LEG has been Initialized");

    Left_LEG.w_e.volt=Move_Three_Sixty;
    degree_modify(&Left_LEG.w_e.volt,&Left_LEG.w_e.degree);
    Left_LEG.k.volt=Move_Three_Sixty;
    degree_modify(&Left_LEG.k.volt,&Left_LEG.k.degree);
    Left_LEG.f.volt=Move_Three_Sixty;
    degree_modify(&Left_LEG.f.volt,&Left_LEG.f.degree);

    printf("\n Left LEG has been Initialized");
}

void degree_modify(int *volt,int *degree)
{
    if((*volt)==Initialize)
    {
        *degree=Zero_Degree;
    }

     if((*volt)==Move_Ninety)
    {
        *degree=Ninety_Degree;
    }

     if((*volt)==Move_One_Eighty)
    {
        *degree=One_Eighty_Degree;
    }

     if((*volt)==Move_Three_Sixty)
    {
        *degree=Three_Sixty_Degree;
    }

}
