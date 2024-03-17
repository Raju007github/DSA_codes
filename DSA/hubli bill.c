#include<stdio.h>
main()

{



 float units,totbill;
printf("enter the units\n");
scanf("%f",&units);





if(units>=0&&units<=100)
{
printf("tot_bill=%f\n",totbill*1.0);
}
else if(units>=101&&units<=200
{
printf("tot_amt=%f\n",100+(units-100)*1.5);
}
else if(units>=201&&units<=450)
{
printf("tot_bill=%f\n",250+(units-200)*2.0);
}
else if(units>450)
{
printf("tot_bill=%f\n",750+(units-450)*2.5);
}
}

