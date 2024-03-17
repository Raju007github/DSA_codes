#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int charge(char,int);

int main()
{
    char type;
    int p_amt;
    printf("Enter the type of item and purchase amount\n");
    scanf("%c%d",&type,&p_amt);
    if(p_amt<1)
    {
        printf("Purchase amount should be greater than 0.");
        exit(0);
    }
    int  total=charge(type,p_amt);
    printf("%d",total);
    return 0;
}
int charge(char type, int p_amt)
{
    int  price=0;
    switch(type)
    {
            case 'T':
         if(p_amt>1&&p_amt<=1000)
             price=p_amt;
    else if(p_amt>=1001)
             price=p_amt-(p_amt-1000)*.07;

          break ;

        case 'C':
         if(p_amt>1&&p_amt<=5000)
             price=p_amt-p_amt*.03;

    else if(p_amt>5000)
             price=p_amt-(p_amt-5000)*.15;
          break ;

            default :printf("Invalid type of item");
            exit(0);
    }
    return price;

}
