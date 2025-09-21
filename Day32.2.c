/*Find the digit that occurs the most times in an integer number.*/


#include <stdio.h>

int main() 
{
    long long num;               
    int digit, i;
    int freq[10] = {0};         
    int maxFreq = 0, mostDigit = 0;

    
    printf("Enter an integer number: ");
    scanf("%lld", &num);

    
    if (num < 0) 
	{
        num = -num;
    }

    
    if (num == 0) 
	{
        freq[0] = 1; 
    }
    while (num > 0) 
	{
        digit = num % 10;    
        freq[digit]++;       
        num = num / 10;      
    }

    
    for (i = 0; i < 10; i++) 
	{
        if (freq[i] > maxFreq) 
		{
            maxFreq = freq[i];
            mostDigit = i;
        }
    }

    
    printf("Digit %d occurs the most (%d times).\n", mostDigit, maxFreq);

    return 0;
}


