/*Rotate an array to the right by k positions.*/


#include <stdio.h>

int main() 
{
    int n, k, i;

    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], temp[n];

   
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }

    
    printf("Enter how many positions to rotate to the right: ");
    scanf("%d", &k);

   
    k = k % n;

    
    for (i = 0; i < k; i++) 
	{
        temp[i] = arr[n - k + i];
    }

    
    for (i = 0; i < n - k; i++) 
	{
        temp[k + i] = arr[i];
    }

    
    for (i = 0; i < n; i++) 
	{
        arr[i] = temp[i];
    }

    
    printf("Array after rotating to the right by %d positions:\n", k);
    for (i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

