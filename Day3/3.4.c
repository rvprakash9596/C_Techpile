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
	
	int sum=0;
	for(i=1; i<=term; i++)
	{
		sum=sum+i;	
	}
	printf("\nThe sum of %d term is : %d",term,sum);
	
}
