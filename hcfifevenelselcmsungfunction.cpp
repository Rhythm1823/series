#include <stdio.h>
int hcf(int,int);
int lcm(int,int);
int main()
{
	int a,b,l;
	printf(" enter any two numbers");
	scanf("%d%d",&a,&b);
	if (a%2==0 && b%2==0)
	{
		printf(" hcf is %d", hcf(a,b));
	}
	else
	{
		l= (a*b)/hcf(a,b);
		printf(" lcm is %d", l);
	}
return 0;
}
int hcf(int a,int b)
{
	int c,j;
	c=a<b?a:b;
	for (j=c;j>=1;j--)
	{
		if (a%j==0 && b %j==0)
		{
			return j;
			break;
		}
	
	}
}
