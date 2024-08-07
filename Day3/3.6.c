#include<stdio.h>
int main()
{
	int i , term;
	printf("Enter the term till which you want to print Natural Number : ");
	scanf("%d",&term);
	for(i=1; i<=term; i++)
	{
		printf("%d\t",i);
	}
	printf("\n");
	for(i=term; i>=1; i--)
	{
		printf("%d\t",i);
	}
	
}
