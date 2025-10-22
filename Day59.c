/*Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.*/


#include <stdio.h>

int main() 
{
    int n, i , k;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for ( i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }
    
    printf("Enter size of subarray (k): ");
    scanf("%d", &k);

    if (k > n || k <= 0) 
	{
        printf("Invalid value of k.\n");
        return 0;
    }

    int windowSum = 0;
    for ( i = 0; i < k; i++) 
	{
        windowSum += arr[i];
    }

    int maxSum = windowSum;

    for ( i = k; i < n; i++) 
	{
        windowSum += arr[i] - arr[i - k];
        if (windowSum > maxSum)
            maxSum = windowSum;
    }

    printf("Maximum sum of subarray of size %d: %d\n", k, maxSum);

    return 0;
}

