//WAP to read a number from the user and test whether the number is negative.
//[ Show message “ THE NUMBER IS NEGATIVE” if it is a negative number , otherwise show nothing. [if-statement]
#include <stdio.h>
void main()
{
    int n;
    printf("enter any number ");
    scanf("%d",&n);
    if(n<0)
    {
        printf(" the given number is negative");
    }
    }
