//15. WAP to illustrate passing an entire array to a function.
#include<stdio.h>
void display(int a[],int );
void main()
{
    int array[100],i,n;
    printf(" enter the number of digits you want to enter");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf(" enter digit%d",i+1);
        scanf("%d",&array[i]);
    }
    display(array,n);
}
void display(int array[],int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf(" \t %d",array[i]);
    }
}
