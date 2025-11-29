/*Write a program to print the product of even numbers from 1 to n.*/



#include<stdio.h>
int main()
{
	int p=1,n,i=1;
	printf("enter the value of n : ");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
			p=p*i;
		}
		i++;
	}
	printf("the product of even numbers is%d",p);
	return 0;
	}

