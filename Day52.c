/*Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] 
that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1.
 Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.*/



#include <stdio.h>

int findCeilIndex(int arr[], int n, int x) {
    int left = 0, right = n - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] >= x) {
            result = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return result; // -1 if no element >= x
}

int main() {
    int i ,n, x;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    while (getchar() != '\n'); // clear input buffer

    printf("Enter the number x: ");
    scanf("%d", &x);

    int index = findCeilIndex(arr, n, x);

    if (index == -1)
        printf("-1\n"); // no element >= x
    else
        printf("Index of ceil of %d: %d\n", x, index);

    return 0;
}

