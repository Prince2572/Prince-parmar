#include<stdio.h>
#include<conio.h>
void main ()
{
   float a,b;
   printf("enter radius:");       //area of circle=22/7*r*r
   scanf("%f",&a);
  b=22*a*a/7;
   printf("(22/7)*%f*%f=%f",a,a,b);
   getch();
}