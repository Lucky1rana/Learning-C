/*Write a program to swap two numbers without using a third variable*/

#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the 1st and 2nd number : ");
	scanf("%d%d",&a,&b);
	printf("Before swapping : a = %d and b = %d\n",a,b);
	a = a+b;
	b = a-b;
	a = a-b;
	printf("After swapping : a = %d and b = %d\n",a,b);
	return 0;
}
