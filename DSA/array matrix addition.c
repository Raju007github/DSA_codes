#include<stdio.h>
int i,x[5],y[5],z[5];
main()
{
    int n;
    void read_array(int n);
    void read_a(int n);
    void display_array(int n);
    void add_array(int n);
    printf("enter how many elements\n");
    scanf("%d",&n);
    if(n>=1 && n<=5)
    {
        read_array(n);
        read_a( n);
        display_array(n);
        display_a(n);
        add_array(n);
    }
    else
        printf("you can enter up to 5\n");
}

void read_array(int n)
{
    for(i=0; i<n; i++)
    {
        printf("enter a value\n");
        scanf("%d",&x[i]);
    }
}
void display_array(int n)
{
    printf("elements in array are\n");
    for(i=0; i<5; i++)
    {
        printf("%d",x[i]);
    }
}
void read_a(int n)
{
    for(i=0; i<n; i++)
    {
        printf("enter a value\n");
        scanf("%d",&y[i]);
    }
}
void display_a(int n)
{
    printf("elements in array are\n");
    for(i=0; i<5; i++)
    {
        printf("%d",y[i]);
    }
}
void add_array( int n)
{
    int i;
    printf("\n the output of addition of 2 array\n");
    for(i=0; i<n; i++)
    {
        z[i]=x[i]+y[i];
        printf("%d\t",z[i]);
    }

}
