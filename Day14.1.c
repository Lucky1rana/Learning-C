/*Write a program to print the sum of the first n odd numbers.*/


#include<stdio.h>
int main()
{
	int i,sum=0,n;
	printf("Enter the number : ");
	scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    sum = n*n;	
	}
	printf("\nsum of first odd number is %d",sum);
	return 0;
}
