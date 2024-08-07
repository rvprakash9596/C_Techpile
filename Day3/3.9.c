// Fibonacci Series till n
#include<stdio.h>
int main()
{
	int a=0,b=1,term;
	
	printf("Enter the last number : ");
	scanf("%d",&term);
	printf("Fibonacci Series is : ");
	printf("%d    %d",a,b);
	int next=a+b;
	
	// using while loop
	/*while(next<=term)
	{
		printf("\t%d ",next);
		a=b;
		b=next;
		next=a+b;
	}*/
	
	//using for loop
	for(next=a+b; next<=term; next=a+b)
	{
		printf("\t%d ",next);
		a=b;
		b=next;
		
	}
}
