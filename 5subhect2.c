//WAP to input 5 subject marks and calculate total and percentages
#include<stdio.h>
int main()
{
	float s1,s2,s3,s4,s5;
	printf("Enter the 1st subject marks :");
	scanf("%f",&s1);
	printf("Enter the 2nd subject marks :");
	scanf("%f",&s2);
	printf("Enter the 3rd subject marks :");
	scanf("%f",&s3);
	printf("Enter the 4th subject marks :");
	scanf("%f",&s4);
	printf("Enter the 5th subject marks :");
	scanf("%f",&s5);
	float total=s1+s2+s3+s4+s5;
	printf("Total marks = %.2f",total);
	float percent=(s1+s2+s3+s4+s5)/5;
	printf("\nThe percent of all 5 subjects is : %.2f%%" ,percent);
	if(percent>32)
	{
		printf("\nYou are passed");
	}
	else{
		printf("Sorry Bro ! You have Failed !");
	}
}
