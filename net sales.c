#include<stdio.h>
#include<conio.h>   //net sales=gross sales-10%discount of gross sales
void main ()
{
   float a,b;
   printf("enter gross sales,discount:");
   scanf("%f",&a);
  b=a-(0.1*a);
   printf("%f-(0.1*%f)=%f",a,a,b),
   getch();
}