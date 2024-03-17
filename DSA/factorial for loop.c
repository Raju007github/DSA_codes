#include<stdio.h>
main()
{
 int i,n,p=1;
 printf("enter a number\n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  p=p*i;
 }
 printf("factorial of %d=%d\n",n,p);
}
