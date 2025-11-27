/*Write a program to input two numbers and display their sum, difference, product, and quotient*/




#include<stdio.h>
int main()
{
	float x , y, sum , diff,pro,quo;
	printf("enter the two numbers ");
	scanf("%f%f",&x,&y);
	sum = x+y;
	diff = x-y;
	pro = x*y;
	quo=x/y;
	printf("the sum of two numbers is %f\n",sum);
	printf ("the product of two numbers is %f\n",pro);
		printf("the difference of two numbers is %f\n",diff);
			printf("the quotient of two numbers is %f\n",quo);
			return 0;
		}
