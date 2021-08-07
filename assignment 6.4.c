//4. WAP to sort n numbers in ascending / descending order.
#include <stdio.h>
int main()
{
	int array[100],i,j,n;
	printf(" enter the number of digits:");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf(" enter %d element",i+1);
		scanf("%d",&array[i]);
	}
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if (array[i]>array[j])
			{
				int temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	printf(" numbers in ascending order");
	for (i=0;i<n;i++)
	{
		printf("\n %d",array[i]);
	}
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if (array[i]<array[j])
			{
				int temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
		printf("\n numbers in descending order");
	for (i=0;i<n;i++)
	{
		printf("\n %d",array[i]);
	}
	return 0;
}
