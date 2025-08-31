/*Write a program to calculate simple and compound interest for given principal, rate, and time.*/

#include <stdio.h>
#include <math.h>

int main() {
    float P,R,T,SI, CI;

    
    printf("Enter principal amount , interest rate and time : ");
    scanf("%f%f%f",&P,&R,&T);

   
    SI = (P * R * T) / 100;

    
    CI = P * (pow((1 + R/ 100), T)) - P;

    
    printf("\nSI = %f\n", SI);
    printf("Compound Interest = %f\n", CI);

    return 0;
}






