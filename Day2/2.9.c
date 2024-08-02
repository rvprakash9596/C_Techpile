#include<stdio.h>
int main()
{
	int unit;
	printf("Enter the unit consumed by the user : ");
	scanf("%d",&unit);
	if(unit<199)
	{
		int charge=unit*1.20;
		printf("Total Electricity bill of %d unit is %d Rs-/",unit,charge);
	}
	else if(unit>200 && unit<400)
	{
		int charge=unit*1.5;
		printf("Total Electricity bill of %d unit is %d Rs-/",unit,charge);
	}
	else if(unit>=600)
	{
		int charge=unit*2;
		printf("Total Electricity bill of %d unit is %d Rs-/",unit,charge);
	}
}
