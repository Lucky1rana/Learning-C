/*Find the sum of main diagonal elements for a square matrix.*/


#include <stdio.h>

int main() 
{
    int n, m , i , j;
    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &n, &m);

    if (n != m) 
	{
        printf("Matrix is not square. Main diagonal sum not possible.\n");
        return 0;
    }

    int a[n][m];
    printf("Enter elements of the matrix:\n");
    for ( i = 0; i < n; i++) 
	{
        for ( j = 0; j < m; j++) 
		{
            scanf("%d", &a[i][j]);
        }
    }

    int sum = 0;
    for ( i = 0; i < n; i++) 
	{
        sum += a[i][i];  
    }

    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}

