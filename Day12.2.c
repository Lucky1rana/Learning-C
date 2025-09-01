/*Write a program to calculate an electricity bill based on units consumed.*/


#include<stdio.h>
int main()
{
	int units,bill=0;
	printf("Enter the number of unit consumed :");
	scanf("%d",&units);
	
	if(units<=100)
	{
		bill=units*5;
		printf("the bill is Rs%d",bill);
	}
	else if(units>100&&units<=200)
	{
		bill=(100*5)+(units-100)*7+100;
		printf("the bill is Rs%d",bill);
	}
	else 
	{ bill=(100*5)+(100*7)+(units-200)*10+500;
		printf("the bill is Rs%d",bill);
	}
	return 0;
}
