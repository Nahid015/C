#include<stdio.h>
int main()
{
    int age,gd;
    printf("Enter your age:");
    scanf("%d",&age);
    printf("Enter your deeds:");
    scanf("%d",&gd);
    if(age<6)
    {
        printf("Reward");
        return 0;
    }
    if(25>=age)
    {
        if(gd>100)
            printf("Reward");
        else
            printf("Execution");
    }
    if(age>26)
    {
        if(gd>500)
            printf("Reward");
        else
            printf("Execution");
    }

}
