//WAP to read a number from user and determine whether the number is even or odd.[if-else]
#include <stdio.h>
void main()
{
    int n;
    printf(" enter any number");
    scanf("%d",&n);
    if (n%2==0)
    {
        printf(" even");
    }
    else
    {
        printf("odd");
    }
}
