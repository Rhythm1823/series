//wap to give sum of digits using recursion
#include <stdio.h>
int sum(int);
void main()
{
    int f,n,c=0;
    printf(" enter any number");
    scanf("%d",&n);



        f= sum(n);
    printf(" sum of digits %d ",f);
}
int sum( int n)
{
    int d;

    if (n==0)
        return 0;
else
{
    d= n%10+sum(n/10);
    return d;

}
}
