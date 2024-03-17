#include<stdio.h>
main()
{
int num;
printf("enter a num\n");
scanf("%d",&num);
switch(num%2)
{
case 0:printf("%d is even num\n",num);
           break;

default:printf("%d is odd num\n",num);
        break;

}




}
