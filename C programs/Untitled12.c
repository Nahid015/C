#include<stdio.h>
 int main()
{
    int i,j,input;
    i=0;
    j=1;

printf("enter a value:");
    scanf("%d",&input);
    for( i=1;i<=input;i++)
        {
        j=j*i;
    }
    printf("The result is %d",j);


}
