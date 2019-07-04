#include "headers.h"

void Robo_ARM_Connect(void)
{
    Right_ARM.s.E=&Right_ARM.e;
    Right_ARM.e.W=&Right_ARM.w;
    Right_ARM.w.F=&Right_ARM.f;

    printf("\n Robot Right ARM is connected successfully.");

    Left_ARM.s.E=&Left_ARM.e;
    Left_ARM.e.W=&Left_ARM.w;
    Left_ARM.w.F=&Left_ARM.f;

    printf("\n Robot Left ARM is connected successfully.");
}

void Robo_LEG_Connect(void)
{
    Right_LEG.w_e.k=&Right_LEG.k;
    Right_LEG.k.foot_ptr=&Right_LEG.f;

    printf("\n Robot Right LEG is connected successfully.");

    Left_LEG.w_e.k=&Left_LEG.k;
    Left_LEG.k.foot_ptr=&Left_LEG.f;

    printf("\n Robot Right LEG is connected successfully.");
}

void Robo_Connect(void)
{
    Robo_ARM_Connect();
    Robo_LEG_Connect();

}

void Robo_display(void)
{
    printf("Displaying The Robot.\n");

        printf("Right ARM Display : ");
        printf("\n Right Arm Shoulder Volt :%i \t Right Arm Shoulder Degree: %i",Right_ARM.s.volt,Right_ARM.s.degree);
        printf("\n Right Arm Elbow Volt :%i \t Right Arm Elbow Degree: %i",Right_ARM.e.volt,Right_ARM.e.degree);
        printf("\n Right Arm Wrist Volt :%i \t Right Arm Wrist Degree: %i",Right_ARM.w.volt,Right_ARM.w.degree);
        printf("\n Right Arm finger Volt :%i \t Right Arm Finger Degree: %i",Right_ARM.f.volt,Right_ARM.f.degree);

        printf("\nLeft ARM Display :");
        printf("\n Left Arm Shoulder Volt :%i \t Left Arm Shoulder Degree: %i",Left_ARM.s.volt,Left_ARM.s.degree);
        printf("\n Left Arm Elbow Volt :%i \t Left Arm Elbow Degree: %i",Left_ARM.e.volt,Left_ARM.e.degree);
        printf("\n Left Arm Wrist Volt :%i \t Left Arm Wrist Degree: %i",Left_ARM.w.volt,Left_ARM.w.degree);
        printf("\n Left Arm finger Volt :%i \t Left Arm Finger Degree: %i",Left_ARM.f.volt,Left_ARM.f.degree);

        printf("\nRight LEG Display : ");
        printf("\n Right LEG Waist End Volt :%i \t Right LEG Shoulder Degree: %i",Right_LEG.w_e.volt,Right_LEG.w_e.degree);
        printf("\n Right LEG Knee Volt :%i \t Right LEG Elbow Degree: %i",Right_LEG.k.volt,Right_LEG.k.degree);
        printf("\n Right LEG Foot Volt :%i \t Right LEG Wrist Degree: %i",Right_LEG.f.volt,Right_LEG.f.degree);

        printf("\nLeft ARM Display :");
        printf("\n Left LEG Waist End Volt :%i \t Left LEG Waist End Degree: %i",Left_LEG.w_e.volt,Left_LEG.w_e.degree);
        printf("\n Left LEG Knee Volt :%i      \t Left LEG Knee Degree: %i",Left_LEG.k.volt,Left_LEG.k.degree);
        printf("\n Left LEG Foot Volt :%i      \t Left LEG Foot Degree: %i",Left_LEG.f.volt,Left_LEG.f.degree);

}
