#include<stdio.h>
int main()
{
int 
netsales,grosssales,discount;
printf("Enter a gross sales:");
scanf("%d",&grosssales);
if (grosssales>20000)
{
discount = grosssales * 15/100;}
else if(grosssales>10000)
{
discount = grosssales * 10/100;
}
else
{
discount = grosssales * 5/100;}
netsales = grosssales - discount;
printf("Net sales = %d\n",netsales);
return 0;
}