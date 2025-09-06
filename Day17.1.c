/*Write a program to check if a number is an Armstrong number.*/


#include <stdio.h>
#include <math.h>

int main() 
{
    int num, original, temp, digits = 0, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    temp = num;

    while (temp != 0) 
	{
        digits++;
        temp = temp / 10;
    }

    temp = num;

    while (temp != 0) 
	{
        int digit = temp % 10;
        sum = sum + pow(digit, digits);
        temp = temp / 10;
    }

    if (sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is NOT an Armstrong number.\n", original);

    return 0;
}

