#include<stdio.h>
#include<conio.h>
void main ()
{                                          //area of triangle=A=a*b/2
   float a,b,c;
   printf("enter height and base:");
   scanf("%f %f",&a,&b);
  c=a*b/2;
   printf("%f*%f/2=%f",a,b,c);
   getch();
}