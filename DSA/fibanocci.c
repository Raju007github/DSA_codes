#include<stdio.h>
main()
{
 void fibanocci(int n);
 int n;
 printf("enter a number\n");
 scanf("%d",&n);
 fibanocci(n);

}
void fibanocci(int n)
{
    int f1=1,f2=3,f3;
    int i;
 //printf("%d%d\n",f1,f2);
 for(i=1;i<n;i++)
 {
  f3=f1+f2;
  f1=f2;
  f2=f3;
  printf("%d\n",f3);

 }

}
