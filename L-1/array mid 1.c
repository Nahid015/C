#include<stdio.h>
int main()
{
    int i,y[10];
    for (i=1;i<10;i++)
    {
        printf("Enter your value:");

        scanf("%d",&y[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("%d\n",y[i]);
    }
}
