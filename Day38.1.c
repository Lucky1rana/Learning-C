/*Add two matrices.*/


#include <stdio.h>
int main() 
{
    int r, c;  
    int i, j;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    int A[r][c], B[r][c], Sum[r][c];    
    printf("\nEnter elements of first matrix (A):\n");
    for (i = 0; i < r; i++) 
	{
        for (j = 0; j < c; j++) 
		{
            scanf("%d", &A[i][j]);
        }
    }

    
    printf("\nEnter elements of second matrix (B):\n");
    for (i = 0; i < r; i++) 
	{
        for (j = 0; j < c; j++) 
		{
            scanf("%d", &B[i][j]);
        }
    }
    for (i = 0; i < r; i++) 
	{
        for (j = 0; j < c; j++) 
		{
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("\nSum of the two matrices:\n");
    for (i = 0; i < r; i++) 
	{
        for (j = 0; j < c; j++) 
		{
            printf("%d\t", Sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}



