#include<stdio.h>
#include<conio.h>
void main ()
{
   float a,b;
   printf("enter kilos:");
   scanf("%f",&a);
  b=a*1000;
   printf("%f kilos*1000= %f grams",a,b);
   getch();
}