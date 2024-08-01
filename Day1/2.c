#include<stdio.h>
int main()
{
	int num;
	printf("Enter number between 1 to 26 :");
	scanf("%d",&num);
	if(num<1 || num>26)
	{
		printf("Number is out of range .\n");	
	}
	else
	{
		char letter='A'+num-1;
		printf("The Character corresponding to the number %d is : %c \n",num,letter);
	}
	return 0;
}
