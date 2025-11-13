/*Check if a matrix is symmetric.*/


#include <stdio.h>

int main() {
    int r, c, i, j;
    int flag = 1; 
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    if (r != c) 
	{
        printf("\nMatrix is not symmetric (not a square matrix).\n");
        return 0;
    }

    int A[r][c];

   
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < r; i++) 
	{
        for (j = 0; j < c; j++) 
		{
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 0; i < r; i++) 
	{
        for (j = 0; j < c; j++) 
		{
            if (A[i][j] != A[j][i]) 
			{
                flag = 0;
                break;
            }
        }
        if (flag == 0)
            break;
    }

    if (flag == 1)
        printf("\nThe matrix is symmetric.\n");
    else
        printf("\nThe matrix is not symmetric.\n");

    return 0;
}


