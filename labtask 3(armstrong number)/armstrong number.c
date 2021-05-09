//check whether it is armstrong or not
#include<stdio.h>

int main()
{
    int input,temp,sum=0,no_of_digits=0,digit;
    scanf("%d",&input);
    temp = input;

    while(temp!=0)
    {
        temp/=10;
        no_of_digits++;
    }

    temp = input;
    while(temp!=0)
    {
        digit = temp%10;
        sum+=pow(digit,no_of_digits);
        temp/=10;
    }
    if(sum == input) printf("Armstrong");
    else printf("Not Armstrong");
    return 0;
}


