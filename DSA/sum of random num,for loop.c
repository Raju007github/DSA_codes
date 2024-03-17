#include<stdio.h>
main()
{
 int i,n,a,sum=0;
 printf("enter a num\n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  printf("enter a num\n");

  scanf("%d",&a);
  sum=sum+a;
  }

printf("sum of random num=%d\n",sum);


}
