/*Write a program to input three numbers and find the largest among them using if–else*/

#include<stdio.h>
int main()
{

int a , b, c;
	printf("Enter the numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("%d is greatest number,a ");
	}
	if(b>a&&b>c)
	{
		printf("%d is greatest number ",b);
	}
	if(c>a&&c>b)
	{
		printf(" %d is greatest number ",c);
	}
}
