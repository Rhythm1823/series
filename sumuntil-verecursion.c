//wap to give sum until input is -ve
#include <stdio.h>
long int sum();
void main()
{
    long int result;
    result= sum();
    printf("%ld",result);

}
long int sum()
{
    int n;
    printf(" enter any number");
    scanf("%d",&n);
    if (n<=0)
    return 0;
    else
        return (n+ sum());
}
