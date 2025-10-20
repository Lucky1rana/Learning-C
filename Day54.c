/*Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 
and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists,
 print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.*/
 
 
 #include <stdio.h>

int main() 
{
    int n , x ;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    int total_sum = n * (n + 1) / 2; 

    for ( x = 1; x <= n; x++) 
	{
        int left_sum = x * (x + 1) / 2;      
        int right_sum = total_sum - (x - 1) * x / 2; 
        if (left_sum == right_sum) 
		{
            printf("Pivot integer: %d\n", x);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}

