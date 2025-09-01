/*Write a program to calculate a library fine based on late days.*/



#include<stdio.h>
int main ()
{
	int days,fine;
	printf("Enter the number of days the book is late : ");
	scanf("%d",&days);
	if(days<=4)
	{
		fine=days*2;
	printf("the fine is %d",fine);
	}
	else if(days>4&&days<=8)
	{
		fine=days*4;
		printf("the fine is %d",fine);
	}
	else if (days>8&&days<=15)
	{
		fine=days*6;
		printf("the fine is %d",fine);
	}
	else 
	{
		printf("membership cancelled");
	}
	return 0;

}
