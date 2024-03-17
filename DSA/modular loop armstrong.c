#include<stdio.h>
main()
{
  int n;
  void armstrong(int n);
  printf("enter a number\n");
  scanf("%d",&n);
  armstrong(n);
}
 void armstrong(int n)
 {
   int dig,sum=0,t=n;
   while(n!=0)
  //for(i=0;i<n;i++)
   {
    dig=n%10;
    sum=sum+dig*dig*dig;
    n=n/10;

   }
 if(t==sum)
 printf("number is  armstrong\n");
 else
 printf("number is not  armstrong\n");


 }
