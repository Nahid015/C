
#include<stdio.h>
int main()
{
int mat1[3][3],mat2[3][3],add[3][3],sub[3][3],mul[3][3],m[3][3];
int i,j,k;
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d ",&mat1[i][j]);
    }
}
for(i=0;i<3;i++)
{
     for(j=0;j<3;j++)
    {
        scanf("%d ", &mat2[i][j]);
    }
}
 printf("Addition: \n");
 for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        add[i][j]=mat1[i][j]+mat2[i][j];
        printf("%d \t" ,add[i][j]);
    }
    printf("\n");
}
printf("\n");
printf("subtraction: \n");
 for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        sub[i][j]=mat1[i][j]-mat2[i][j];
        printf("%d \t",sub[i][j]);
    }
    printf("\n");
}
printf("\n");
printf("Multiplication: \n");
 for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        mul[i][j]=0;
        for(k=0;k<3;k++)
        {
            mul[i][j]=mul[i][j]+mat1[i][k]*mat2[k][j];
        }
        printf("%d \t",mul[i][j]);
    }
    printf("\n");
}
 printf("\n");
 return 0;
}



