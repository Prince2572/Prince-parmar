#include <stdio.h>
int main()
{
int p,c,m,total;
float avg;
printf("Enter marks of 3 subjects:");
scanf("%d %d %d",&p,&c,&m);
if(p<35 || c<35 || m<35)
{
printf("Result = Fail");
return 0;
}
total = p + c + m;
avg = total / 3.0;
printf("Average = %f\n",avg);
if(avg >= 70)
{
printf("Grade = Distinction\n");
}
else if (avg >= 60)
{
printf("Grade = First\n");
}
else if(avg >= 50)
{
printf("Grade = Second\n");
}
else if(avg >= 35)
{
printf("Grade = Third\n");
}

return 0;
}