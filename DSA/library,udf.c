#include<stdio.h>
main()
{
  float fine( char library, float days);
  float days,amt;
  char library;
  printf("Enter the library and Number of days\n");
  scanf("%c%f",&library,&days);
  libraries(library,days);
  amt=fine(library,days);
 printf("amt to be paid",amt);
}

float fine( char library, float days)
{
  float fine,days;
  char library
  if(  library=='C')
  {
    if(days>=1 && days<=5)
    {

    printf(" fine=%f\n",days*0.6);
    }
    else if(days>=6 && days<=10)
    {

      printf(" fine=%f\n",days*2.2);
    }
    else if(days>=11 && days<=15)
    {

      printf(" fine=%f\n",days*5.7);
    }
    else if(days>15)
    {
       printf("Your membership cancelled\n");
    }
  }
   else if(library=='M' )
   {
     if(days>=1 && days<=5)
     {

       printf(" fine=%f\n",days*1.2);
     }
     else if(days>=6 && days<=10)
     {

       printf(" fine=%f\n",days*2.5);
     }
     else if(days>=11 && days<=15)
     {

       printf(" fine=%f\n",days*10.6);
     }
     else if(days>15)
     {
       printf("You cannot borrow book any-more\n");

     }
   }
return a
}
