
#include <stdio.h>
void display (int );
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
		display(array[i]);
	}
	return 0;

}
void display(int a)
{

	printf("  %d \t",a);


}
