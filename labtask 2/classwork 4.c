#include<stdio.h>

int main()
{
   int i,n,sum=0;
   printf("Enter an odd number:",n);
   scanf("%d",&n);
   for(i=1;i<=n;i=i+2)
   {
       printf("%d\n",i);
       sum=sum+i;
   }
   printf("The sum is: %d",sum);
}
