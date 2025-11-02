/*Check if the elements on the diagonal of a matrix are distinct.*/


#include <stdio.h>
int main() 
{
    int n, m , i , j;
    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &n, &m);

    if (n != m) 
	{
        printf("Matrix is not square. Diagonal check not possible.\n");
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
    int diag[n];
    for ( i = 0; i < n; i++) 
	{
        diag[i] = a[i][i];
    }  
    int distinct = 1; 
    for ( i = 0; i < n; i++) 
	{
        for (j = i + 1; j < n; j++) 
		{
            if (diag[i] == diag[j]) 
			{
                distinct = 0;
                break;
            }
        }
        if (!distinct)
            break;
    }

    if (distinct)
        printf("All diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");

    return 0;
}


