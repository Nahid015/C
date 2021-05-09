#include<stdio.h>
 int main()
{
    int i=10,input,result;
    printf("Enter the value:");
    scanf("%d",&input);
    if(input%10==0){
        result=result/10;
    }

    printf("The number of digit of a given intiger:%d",result);
    return 0;


}
