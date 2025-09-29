/*Perform diagonal traversal of a matrix.*/


#include <stdio.h>

int main() 
{
    int rows, cols , i , j ,col , row;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int a[50][50];
    printf("Enter the elements of the matrix:\n");
    for ( i = 0; i < rows; i++) 
	{
        for (j = 0; j < cols; j++) 
		{
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nDiagonal Traversal:\n");

    
    for ( col = 0; col < cols; col++) 
	{
        i = 0, j = col;
        while (i < rows && j >= 0) 
		{
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

   
    for ( row = 1; row < rows; row++) 
	{
        int i = row, j = cols - 1;
        while (i < rows && j >= 0) 
		{
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    return 0;
}

