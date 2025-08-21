 #include<stdio.h>
#include<conio.h>
void main ()
{
   float a,b,c,e,d,r;
   printf("enter 2 nos.");
   scanf("%f %f",&a,&b);
   c=a/b;
   printf("%f / %f = %f\n",a,b,c);
   d=a+b;
   printf("%f + %f = %f\n",a,b,d);
   e=a-b;
   printf("%f - %f = %f\n",a,b,e);
   r=a*b;
   printf("%f * %f = %f\n",a,b,r);
   getch();
}