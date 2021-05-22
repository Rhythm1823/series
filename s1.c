// series: 1,2,5,10,17.26,37 until 750
#include <stdio.h>
int main()
{
	int a=1;
	int c=1;

	while (c<750)
	{
			printf("%d \t", c);
		c=(a*a)+1;
	
		a++;
	}
	return 0;
	
	}
