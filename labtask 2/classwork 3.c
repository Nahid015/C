#include<stdio.h>
int main()
{
    int i,m,a;
    printf("Enter a number:",a);
    scanf("%d",&a);
    for(i=0;i<=a;i++)
    {
       m=i*a;
       printf("%d x %d= %d\n",a,i,m);
    }
    return 0;

}
