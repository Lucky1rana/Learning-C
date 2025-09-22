/*Search in a sorted array using binary search.*/


#include <stdio.h>

int main() 
{
    int n, i, search;
    int low, high, mid;
    int index = -1;  

    
    printf("Enter the number of elements in sorted array: ");
    scanf("%d", &n);

    int arr[n]; 

    
    printf("Enter %d sorted elements (ascending order):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    printf("Enter element to search: ");
    scanf("%d", &search);

    
    low = 0;
    high = n - 1;

    while (low <= high) 
	{
        mid = (low + high) / 2;

        if (arr[mid] == search) 
		{
            index = mid; 
            break;
        }
        else if (arr[mid] < search) 
		{
            low = mid + 1;  
        }
        else 
		{
            high = mid - 1; 
        }
    }

    
    if (index != -1) 
	{
        printf("Element found at index %d (position %d)\n", index, index + 1);
    } else 
	{
        printf("-1\n");  
    }

    return 0;
}

