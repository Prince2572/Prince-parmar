#include<stdio.h>
#include<conio.h>
void main ()
{
   float a,b,c,d;
   printf("enter bytes:");
   scanf("%f",&a);
  b=a/1024;
   printf("%f bytes/1024= %fkb\n",a,b);
  c=b/1024;
   printf("%f bytes/1024= %fmb\n",b,c);
  d=c/1024;
   printf("%f bytes/1024= %fgb\n",c,d);
   getch();
}