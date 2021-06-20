// WAP to ask two numbers . Display message” EITHER NUMBER IS NEGATIVE”
//if either number is negative ; otherwise display message” BOTH NUMBER ARE POSITIVE”.[goto statement]
#include <stdio.h>
int main()
{
    int a,b,end;
    printf(" enter any two numbers");
    scanf("%d%d",&a,&b);
    if (a<0 || b<0)
    {
        printf(" either number is negative");
        goto end;
    }
    printf(" both number is +ve");
    end:
        return 0;
}
