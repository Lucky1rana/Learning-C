/* Write a program to assign grades based on a percentage input */


#include<stdio.h>
int main()
{
	int per ;
	printf("Enter the percentage obtained : ");
	scanf("%d",&per);
	if(per>90)
	{
		printf("A grade");
	}
	else if(per>80&&per<=90)
	{
	printf(" B grade");
	}
	else if(per>70&&per<=80)
	{
		printf(" C grade ");
	}
	else if(per>60&&per<=70)
	{
		printf(" D grade ");
	}
	else if(per>50&&per<=60)
	{
		printf(" E grade ");
	}
	else if(per>=33&&per<=50)
	{
		printf(" F grade ");
	}
	else
	{
		printf("fail");
	}
}
