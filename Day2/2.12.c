#include<stdio.h>
int main()
{
	char ch;
	printf("Input a Character : ");
	scanf("%c",&ch);
	if((ch>'a' && ch<='z')||(ch>'A' && ch<='Z'))
	{
		printf("Alphabet");
	}
	else if(ch>'0' && ch<='9')
	{
		printf("Number");
	}
	else
	{
		printf("This is Special Character");
	}
}
