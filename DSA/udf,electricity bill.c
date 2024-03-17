#include<stdio.h>
float electricity(float );
main()
{

float tot_bill,units;
printf("enter the units\n");
scanf("%f",&units);
tot_bill=electricity(units);
printf("tot_bill=%f",tot_bill);
}
float electricity(float units)
{
float t;
if(units>=0 && units<=100)
{
t=units*1;
}
else if(units>=101 && units<=200)
{
t=units*1.5;
}
else if(units>200)
{
t=units*2;
}
return(t);
}
