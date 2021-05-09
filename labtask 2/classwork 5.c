#include <stdio.h>
int main()
{
    int i, factor = 1, num;
    printf("Enter the number: \n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
        {
            factor = factor * i;
        }

    printf("Factorial is:%d\n",factor);
}
