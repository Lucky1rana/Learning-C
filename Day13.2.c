/*Write a program to print numbers from 1 to n.*/




#include<stdio.h>
int main()
{
	int n , i;
	printf("Enter the number : ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		printf("%d",i);
		if(i<n)
		{
			printf(" ");
		}
	}
	return 0;
	
}
