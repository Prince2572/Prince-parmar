#include<stdio.h>
int main()
{
float c,f;
printf("Enter Temperature in fahrenheit : ");
scanf("%f",&c);
f=5/9*(c-32);
printf("5/9(%f-32)fahrenheit = %f celsius",c,f);
}