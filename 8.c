#include<stdio.h>
int main()
{
	int s,hours,minutes,seconds;
	printf("Please enter the seconds to convert it into Hours,Minutes and Seconds :");
	scanf("%d",&s);
	hours=(s/3600);
	minutes=(s-(3600*hours))/60;
	seconds=(s-(3600*hours)-(minutes*60));
	printf("%d Hours",hours);
	printf("\t%d Minute",minutes);
	printf("\t%d Second",seconds);
	return 0;
}
