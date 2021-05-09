#include<stdio.h>
int main()
{
    int i,j,n,number=10;
    printf("Enter the value of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j>=1;j--)

           {


           printf("%d",number);
            number++;
           }

        printf("\n");
    }
}
