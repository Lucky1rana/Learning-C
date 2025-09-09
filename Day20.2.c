/*Write a program to find the 1’s complement of a binary number and print i*/

#include <stdio.h>

int main() {
    long long n, digit, result = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &n);

    while (n > 0) {
        digit = n % 10;   
        if (digit == 0)
            result = result + 1 * place;  
        else
            result = result + 0 * place;  

        n = n / 10;     
        place = place * 10;  
    }

    printf("1's complement = %lld\n", result);

    return 0;
}



