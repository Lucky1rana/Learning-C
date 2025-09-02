/*Write a program to calculate a library fine based on late days.*/

#include<stdio.h>
int main ()
{
	int days,fine=0;
	printf("Enter the number of days the book is late : ");
	scanf("%d",&days);
	if(days<=5)
	{
		fine=days*2;
	printf("the fine is Rs%d",fine);
	}
	else if(days>5&&days<=10)
	{
		fine=days*4;
		printf("the fine is Rs%d",fine);
	}
	else if (days>10&&days<=30)
	{
		fine=days*6;
		printf("the fine is Rs%d",fine);
	}
	else 
	{
		printf("membership cancelled");
	}
	return 0;

}






