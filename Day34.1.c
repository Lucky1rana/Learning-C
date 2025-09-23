/*Insert an element in an array at a given position.*/


#include <stdio.h>

int main() 
{
    int arr[100];   
    int n, pos, element;
    int i;

    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the position (1 to %d) where to insert: ", n + 1);
    scanf("%d", &pos);

    
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    
    for (i = n; i >= pos; i--) 
	{
        arr[i] = arr[i - 1];
    }

    
    arr[pos - 1] = element;

    
    n++;

    
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }

    return 0;
}

