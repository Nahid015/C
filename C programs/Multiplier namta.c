#include<stdio.h>
int main ()
{
    int n=5;
    int i=1;
    while(i<=10)
    {
        printf("%dX%d=%d",n,i,n*i);
        i=i+1;
        printf("\n");
    }
    return 0;
}
