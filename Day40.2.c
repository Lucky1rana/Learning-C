/*Multiply two matrices.*/


#include <stdio.h>

int main() 
{
    int m, n, p, q , i , j , k ;
    
    
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &m, &n);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &p, &q);

    
    if (n != p) 
	{
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    int A[50][50], B[50][50], C[50][50];

    
    printf("Enter elements of first matrix:\n");
    for ( i = 0; i < m; i++) 
	{
        for ( j = 0; j < n; j++) 
		{
            scanf("%d", &A[i][j]);
        }
    }

    
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < p; i++) 
	{
        for ( j = 0; j < q; j++) 
		{
            scanf("%d", &B[i][j]);
        }
    }

   
    for ( i = 0; i < m; i++) 
	{
        for ( j = 0; j < q; j++) 
		{
            C[i][j] = 0;
        }
    }

    
    for ( i = 0; i < m; i++) 
	{
        for (j = 0; j < q; j++) 
		{
            for ( k = 0; k < n; k++) 
			{ 
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

   
    printf("\nResultant Matrix (C = A x B):\n");
    for ( i = 0; i < m; i++) 
	{
        for ( j = 0; j < q; j++) 
		{
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}


