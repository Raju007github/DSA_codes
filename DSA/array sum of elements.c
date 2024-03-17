
#include<stdio.h>
int i,x[5];
main()
{
 int n;
 void read_array(int n);
 void display_array(int n);
 void sum_array(int n);
 printf("enter how many elements\n");
 scanf("%d",&n);
 if(n>=1 && n<=5)
 {
 read_array(n);
 display_array(n);
 sum_array(n);
 }
 else
 printf("you can enter up to 5\n");
}

  void read_array(int n)
 {
   for(i=0;i<n;i++)
   {
     printf("enter a value\n");
     scanf("%d",&x[i]);
     }
     }
    void display_array(int n)
     {
       printf("elements in array are\n");
       for(i=0;i<5;i++)
       {
        printf("%d",x[i]);
       }
     }
     void sum_array(int n)
     {
      int sum=0;
      for(i=0;i<n;i++)
      {
      sum=sum+x[i];
      }
      printf("sum of array elements are=%d",sum);
     }
