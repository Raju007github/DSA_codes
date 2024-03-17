#include<stdio.h>
struct mobile
{
 char company[50];
 char model[30];
 int price;
 };
 main()
 {
  struct mobile *ptr,*ptr1;
  int i,n;
  void read_mobile(struct mobile *ptr,int n);
  void display_mobile(struct mobile *ptr1,int n);
  void more_price(struct mobile *ptr,int n);
  ptr=(struct mobile*)malloc(n*sizeof(struct mobile));
  ptr1=ptr;
  printf("enter no of mobile\n");
  scanf("%d",&n);
  read_mobile(ptr, n);
  display_mobile(ptr1, n);
 more_price(ptr,n);
   free(ptr);
   free(ptr1);

}
 void read_mobile(struct mobile *ptr,int n)
 {
   int i;
   printf("enter %d mobile details\n",n);
   for(i=0;i<n;i++)
   {
   printf("enter company ,modeland price of %d mobile\n",i+1);
   scanf("%s%s%d",&ptr->company,&ptr->model,&ptr->price);
   ptr=ptr+1;
   }
}
void display_mobile(struct mobile *ptr1,int n)
{

 int i;
 printf("details  of all mobiles are\n");
 for(i=0;i<n;i++)
 {
 printf("company=%s\t model=%s\t  price=%d\n",ptr1->company,ptr1->model,ptr1->price);
 ptr1=ptr1+1;
 }

}
void more_price(struct mobile *ptr,int n)
{
int price;
struct mobile *ptr1;
int i;
ptr1=ptr;
price=ptr->price;
for(i=0;i<n;i++)
{
if(ptr->price>price)
{
 price=ptr->price;
 ptr1=ptr;
}
 ptr=ptr+1;
}
printf("mobile with more price\n");
printf("company=%s\t model=%s\t  price=%d\n",ptr1->company,ptr1->model,ptr1->price);
 ptr1=ptr1+1;
}
