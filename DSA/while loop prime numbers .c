#include<stdio.h>
main()
{
  int i,num,prime=0;
  printf("enter a number\n");
  scanf("%d",&num);
  i=2;
  while(i<=num/2)
   {
     if(num%i==0)
     {
     prime=1;
     break;
     }
   i++;
   }
  if(prime==1)
  printf("%d is not prime\n",num);
  else
  printf("%d is prime\n",num);
}
