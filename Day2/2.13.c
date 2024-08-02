#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter 1st number : ");
	scanf("%d",&a);
	printf("Enter 2nd number : ");
	scanf("%d",&b);
	printf("Enter 3rd number : ");
	scanf("%d",&c);
	int res=(a+b+abs(a-b))/2;
	int max=(res+c+abs(res-c))/2;
	printf("Maximum value of these three numbers is : %d",max);
	printf("\n");
}
