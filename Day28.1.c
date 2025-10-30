/*Write a program to print all the prime numbers from 1 to n.*/

#include <stdio.h>

int main(){ 

    int n, num, div, prime;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    
    for (num = 2; num <= n; num++) 
	{
        prime = 1;  

        
        for (div = 2; div <= num / 2; div++) 
		{
            if (num % div == 0) 
			{
                prime = 0;  
                break;
            }
        }

        if (prime == 1) {
            printf("%d ", num);
        }
    }

    return 0;
}

