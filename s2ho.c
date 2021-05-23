// 1+11+111+1111 and sum
#include <stdio.h>
int main()
{
	int n,i,t=1;
	long int sum=0;
	printf(" emter the number : ");
	scanf("%d", &n);
	for (i=1; i<=n; i++)
	{
		printf("%d", t);
		if (i<n)
		{
			printf("+ ");
		}
		sum += t;
		t = (t*10)+1;
		}
	printf("\n the sum is : %ld", sum);
	return 0;
	
}
