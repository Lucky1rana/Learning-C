/*Write a program to take a number as input and print its equivalent binary representation.*/



#include<stdio.h>
int main()
{
	int n,num,remainder;
	long long binary = 0 , place = 1;
	printf("enter a number : ");
	scanf("%d",&n);
	
	num = n;
	while(num>0)
	{
		remainder = num%2;
		binary = binary + remainder*place;
		num = num/2;
		place = place*10;
		
	}
	printf("%d\n",binary);
	return 0;
}
