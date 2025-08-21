#include<stdio.h>
#include<conio.h>
void main ()        //calculate the avrage of three subject
{                       //a+b+c=d
   float a,b,c,d;
   printf("enter sub1,sub2,sub3:");
   scanf("%f %f %f",&a,&b,&c);
  d=(a+b+c)/3;
   printf("(%f+%f+%f)/3=%f",a,b,c,d),
   getch();
}