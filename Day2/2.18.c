#include<stdio.h>
int main()
{
	// Checking Vowel or Consonants using a switch case..
	char c;
	printf("Enter a Character : ");
	scanf("%c",&c);
	if((c>='A' && c<='Z') || (c>='a' && c<='z'))
	switch(c)
	{
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("%c is a Vowel",c);
			break;
		default:
			printf("%c is a Consonant;",c);	
	}
}
