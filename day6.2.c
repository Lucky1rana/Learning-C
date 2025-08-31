/*Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.*/


#include<stdio.h>
int main()
{
	int a ;
	printf("please enter the integer : ");
	scanf("%d",&a);
	if(a>0)
	{
	
	printf("integer is positive ",a);
    }
    else
    {
    	if(a<0){
		
    	printf("integer is negative ",a);
		}
		else
		printf("integer is 0 ",a);
		

	}
	
	
}

