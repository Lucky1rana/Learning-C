/*Write a program to reverse a given number.*/



#include<stdio.h>
int main()
{
	int num,rev=0,remainder;
	printf("enter the number : ");
	scanf("%d",&num);
	while(num!=0)
	{
	remainder = num%10;
	rev = rev*10+remainder;
	num = num/10;
    }
	printf("the reverse of a given number is %d ",rev);
	return 0;
}
