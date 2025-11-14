/*Write a program to check if a number is a strong number*/


#include <stdio.h>
int main() {
    int num, original, digit, sum = 0, fact, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  

    while (num > 0) {
        digit = num % 10;    
       
        fact = 1;
        for (i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum = sum + fact;    
        num = num / 10;      
    }

    if (sum == original)
        printf("%d is a Strong Number.\n", original);
    else
        printf("%d is Not a Strong Number.\n", original);

    return 0;
}





