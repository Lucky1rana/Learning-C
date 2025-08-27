#include<stdio.h>
int main()
{
	int yr ;
	printf("enter the year : ");
	scanf("%d",&yr);
	if((yr%400==0)||(yr%4==0&&yr%100!=0))
	{
		printf("it is leap year");
	}
	else
	{
	printf("it is not a leap year");
	}
}
