/*Write a program to calculate the factorial of a number.*/

#include<stdio.h>
int main()
{
	int num,i,fact=1;
	printf("enter the number : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("factorial of a number is %d",fact);
	return 0;
}
