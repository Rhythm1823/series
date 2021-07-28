#include <stdio.h>
void display (int,int );
int main()
{
	int i,n, array[100];
	printf(" enter the number of digits you want to enter");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf(" enter digit%",i+1);
		scanf("%d",&array[i]);
	}
	for (i=0;i<n;i++)
	{
		display(array[i],n);
	}
	return 0;
}
void display(int a,int n)
{
	int i;
	printf(" The provided digits are: \n");
	for (i=0;i<n;i++)
	{
		printf(" digit%d: %d \t",i+1,a);
	}
}
