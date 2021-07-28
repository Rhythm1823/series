//16. WAP to read 10 numbers and reorder them in ascending order using function sor(),read(), display().
#include <stdio.h>
void read();
void sor(int a[]);
void display(int a[]);
int i,j;
void main()
{
    read();
}
void read()
{
    int array[10];

    for (i=0;i<10;i++)
    {
        printf("enter digit ");
        scanf("%d",&array[i]);
    }
    sor(array);
}
void sor(int array[])
{



    for (i=0;i<10;i++)
    {
        for (j=i+1;j<10;j++)
        {
            if (array[i]>array[j])
            {
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }

printf(" in ascending: ");
display (array);
}
display (int array[])
{




    for (i=0;i<10;i++)
    {
        printf("\n %d \n ",array[i] );
    }
}

