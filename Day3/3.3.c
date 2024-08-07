#include<stdio.h>
int main()
{
	int i;
	printf("The first 10 Natural Numbers are :\n");
	for(i=1; i<=10; i++)
	{
		printf("%d\n",i);
	}
	
	printf("Now adding these natural numbers...");
	
	// Now adding these natural numbers...
	
	int sum=0;
	for(i=1; i<=10; i++)
	{
		sum=sum+i;
	}
	printf("\nSum of first 10 natural number is : %d ",sum);
}
