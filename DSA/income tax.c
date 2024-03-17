#include<stdio.h>
main()
{
float salary,taxpaid;
printf("enter the salary");
scanf("%f",&salary);
if(salary>=1&&salary<=100000)
{
printf("tax paid=%f\n",salary);
}
else if(salary>=100000&&salary<=250000)
{
printf("tax paid=%f\n",(salary-250000)*0.05);
}
else if(salary>=250000&&salary<=1000000)
{
 printf("tax paid=%f\n",7500+(salary-1000000)*0.075);
}
}
