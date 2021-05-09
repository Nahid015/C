#include<stdio.h>
int main()
{
    int a,b;
    printf("input");
    scanf("%d",&a);
    if(a<6)
    {
        printf("good");
        return 0;
    }
    if(a<26)
    {
        printf("bad");
    }
    return 0;
}
