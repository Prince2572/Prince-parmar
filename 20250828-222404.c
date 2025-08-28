#include <stdio.h>
int main()
{
int Number;
printf("Enter a Number:");
scanf("%d",&Number);
if(Number%7==0)
printf("%d is divisible by 7\n",Number);
else
printf("%d is not divisible by 7\n",Number);
return 0;
}