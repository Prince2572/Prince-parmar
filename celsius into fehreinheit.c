#include<stdio.h>
int main()
{
float c,f;
printf("Enter Celsius : ");
scanf("%f",&c);
f=(9*c/5)+32;
printf("9 * %f Celsius /5 = %f Fahrenheit",c,f);
}