/*Search for an element in an array using linear search.*/

#include <stdio.h>

int main() 
{
    int n, i, key, index = -1;

    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n]; 

    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }

    
    printf("Enter element to search: ");
    scanf("%d", &key);

    
    for(i = 0; i < n; i++) 
	{
        if(arr[i] == key) 
		{
            index = i;      
            break;          
        }
    }

    
    if(index == -1) 
	{
        printf("-1 (Element not found)\n");
    } else 
	{
        printf("Element found at index %d\n", index);
    }

    return 0;
}





