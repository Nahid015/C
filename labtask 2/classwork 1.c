//sum and average
#include<stdio.h>

int main()
{
   float a,b,c,d,e,f,g,h,i,j,sum=0,avrg;
   printf("Input 10 numbers:\n");
   scanf("%f %f %f %f %f %f %f %f %f %f",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);

   sum=sum+a+b+c+d+e+f+g+h+i+j;
   avrg=(float)sum/(float)10;
   printf("The sum is: %f \nThe average is :%f",sum,avrg);
   return 0;
}

