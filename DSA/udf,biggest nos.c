#include<stdio.h>
main()
{
float a,b,big;
float biggest(float a,float b);
printf("enter 2 nos\n");
scanf("%f%f",&a,&b);
big=biggest(a,b);
printf("biggest of 2 nos=%f\n",big);


}

float biggest(float x,float y)
{
if(x>y)
{
return(x);
}
else
{
return(y);
}

}
