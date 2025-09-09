/*Write a program to find the product of odd digits of a number*/

#include <stdio.h>
int main() 
{
    int n, digit, product = 1;
    int found = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0)   
        n = -n;

    while(n > 0) 
	{
        digit = n % 10;   
        if(digit % 2 != 0) 
		{  
            product = product * digit;
            found = 1;
        }
        n = n / 10;  
    }

    if(found == 1)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits found\n");

    return 0;
}



