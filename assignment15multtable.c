//WAP to display multiplication table of 5-10.
#include <stdio.h>
void main()
{
    int i,j;
    for (i=5;i<=10;i++)
    {
        for (j=1;j<=10;j++)
        {
            printf("\n %d * %d = %d", i,j,i*j);
        }
     printf("\n");
    }
}
