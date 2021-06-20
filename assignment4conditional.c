//WAP to read three numbers from user and determine the largest among them.[using conditional operator]
#include <stdio.h>
void main()
{
    int a,b,c,l;
    printf(" enter any three numbers");
    scanf("%d%d%d",&a,&b,&c);
    l= a > b ? ( a > c ? a : c) : (b > c ? b : c) ;
    printf("%d",l);
}
