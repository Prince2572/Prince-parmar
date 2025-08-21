#include<stdio.h>
#include<conio.h>
void main ()
{/* program to add  nos.*/
  int a,b,c;
  clrscr();
  printf("Enter 2 numbers:");
  scanf("%d %d",&a,&b);
  c=a+b;
  printf("%d + %d = %d\n",a,b,c);
  getch();
}