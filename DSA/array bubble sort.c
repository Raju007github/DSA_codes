#include<stdio.h>
int i,j,x[5];
main()
{
    int n;
    void read_array(int n);
    void display_array(int n);
    void bubble_sort(int n);

    printf("enter how many elements\n");
    scanf("%d",&n);
    if(n>=1 && n<=5)
    {
        read_array(n);
        display_array(n);
        bubble_sort(n);
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
        printf("%d\t",x[i]);
    }
}
void bubble_sort(int n)
{
    int temp;
    for(i=0; i<n; i++)
{
    for(j=0; j<n-i-1; j++)
    {
        if(x[j]>x[j+1])
        {

            temp=x[j];
            x[j]=x[j+1];
            x[j+1]=temp;
        }


    }

}
display_array(n);
}

