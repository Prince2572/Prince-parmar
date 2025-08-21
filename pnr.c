#include<stdio.h>
#include<conio.h>
void main ()
{
   float a,b,c,d;
   printf("enter pricipal,rate,time respectively:");
   scanf("%f %f %f",&a,&b,&c);
  d=a*b*c/100;
   printf("%f*%f*%f/100 = %f intrest",a,b,c,d);
   getch();
}