/*Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms*/


#include <stdio.h>
int main() 
{
    int n, i = 1;
    float sum = 0.0;          
    float num, den;           

    printf("Enter number of terms: ");
    scanf("%d", &n);

    while (i <= n) 
	{
        num = 2 * i - 1;      
        if (i == 1)
            den = 1;          
        else
            den = 2 * i;      

        sum = sum + (num / den); 
        i++;
    }

    printf("Sum of the series up to %d terms = %.2f\n", n, sum);

    return 0;
}

