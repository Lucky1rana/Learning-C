/*Write a program to swap two numbers by using a third variable.*/


#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the two numbers : ");
	scanf("%d%d",&a,&b);
	printf("before swapping the numbers are %d%d\n",a,b);	
	c = a;
	a = b;
	b = c;
	printf("after swapping the numbers are %d%d",a,b);
	return 0;
}
