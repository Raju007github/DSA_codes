#include<stdio.h>
void readarray(int a[100][100],int d,int area);
void printarray(int a[100][100],int d,int area);
void match(int a[100][100],int d,int area);

void main()
{
    int d,area;
    int a[100][100];
    printf("Enter the number player:\n");
    scanf("%d",&area);

    printf("Enter the match\n");
    scanf("%d",&d);

    readarray(a,d,area);
    printarray(a,d,area);
    match(a,d,area);

}

void readarray(int a[100][100],int d,int area)
{


 int i,j;
    printf("Enter the won or lost match\n");
    for(i=0;i<area;i++)
    {
        for(j=0;j<d;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
}

void printarray(int a[100][100],int d,int area)
{   int i,j;
    for(i=0;i<area;i++)
    {
        for(j=0;j<d;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");

    }
}

void match(int a[100][100],int d,int area)
{
    int i,j,count;

    for(i=0;i<area;i++,count=0)
    {
        for(j=0;j<d;j++)
        {
            if(a[i][j]==1)
            {
                count++;
            }
        }
        printf("the player %d won mathes are:%d\n",i+1,count);

    }

}
