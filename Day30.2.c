/*Count positive, negative, and zero elements in an array.*/


#include <stdio.h>

int main() {
    int n, i;
    int positive = 0, negative = 0, zero = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];   // 1D array

    // Input elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count positive, negative and zero elements
    for (i = 0; i < n; i++) {
        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;
        else
            zero++;
    }

    // Output results
    printf("Total positive numbers = %d\n", positive);
    printf("Total negative numbers = %d\n", negative);
    printf("Total zeros = %d\n", zero);

    return 0;
}

