#include <stdio.h>
int main()
{
int g,a,d,n;
printf("Enter Gross salary:");
scanf("%d",&g);
if(g>10000)
{a = g * 10 / 100;
d = 3 * g / 100;}
else if(g>5000)
{
a = g * 7 / 100;
d = g * 2 / 100;}
n = g + a - d;
printf("Net salary =%d\n",n);
return 0;
}