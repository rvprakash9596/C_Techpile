#include<stdio.h>
int main()
{
	int m,n; //10,20
	printf("Enter 1st number : ");
	scanf("%d",&m);
	printf("Enter 2nd number : ");
	scanf("%d",&n);
	printf("Before the swapping , m=%d and n=%d",m,n);
	m=m+n;//a=10+20=30
	n=m-n;//b=30-20=10 now n is swapped
	m=m-n;//30-10=20   ab m bhi swap ho gya
	printf("\nAfter the swapping , m=%d and n=%d",m,n);
	return 0;
}
