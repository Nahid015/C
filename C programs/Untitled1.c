#include<stdio.h>
#include<math.h>
double solution(double a,double b,double c);
void main()
 {
     double x,y,z,s;
     printf("Enter the values:");
     scanf("%lf%lf%lf",&x,&y,&z);
     s= solution(x,y,z);
     printf("%lf",s);
     return 0;


 }
 double solution(double a,double b,double c)
 {
double z=((b*b)-4*a*c);
double m=((-b+sqrt(z))/(2*a));
double n=((-b-sqrt(z))/(2*a));
double l=(-b/(2*a));
     if (z==0){
        printf("The result is :%lf",l);
        return l;

               }
             else if (z>0)
               {
                   printf("the result is :%lf",n);
                   return m;
                   }

                  else if (z<0)
                    {
                    printf("the result is imaginary ");
                   return 100000;
               }
               }


