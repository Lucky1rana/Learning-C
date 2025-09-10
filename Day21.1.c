/*Write a program to swap the first and last digit of a number*/


#include <stdio.h>

int main() {
    int num, first, last, temp, pow = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = temp % 10;  

    
    while (temp >= 10) {
        temp = temp / 10;
        pow = pow * 10;
    }
    first = temp;  

    
    num = num % pow;      
    num = num / 10;       
    num = last * pow + num * 10 + first;

    printf("After swapping: %d\n", num);

    return 0;
}

