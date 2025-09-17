/*Read and print elements of a one-dimensional array.*/


#include <stdio.h>

int main() 
{
    int n, i;           
    int a[100];         

    printf("Enter how many elements: ");
    scanf("%d", &n);

    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &a[i]);
    }

    
    printf("You entered:\n");
    for (i = 0; i < n; i++) 
	{
        printf("%d ", a[i]);
    }

    return 0;
}

