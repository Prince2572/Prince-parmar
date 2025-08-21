#include<stdio.h>
#include<conio.h>
void main ()      //g+a-d=net
{
   int a,b,c,d;
   printf("enter gross salary,allowance,deduction:");
   scanf("%d %d %d",&a,&b,&c);
  d=a+(0.1*b)-(0.03*c);
   printf("%d+(0.1%d)-(0.03%d)=%d",a,b,c,d);
   getch();
}