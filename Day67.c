/*Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also 
sorted. Print the merged array.*/


#include <stdio.h>

int main() 
{
    int m, n;
    int i, j, k;

    
    printf("Enter size of first array: ");
    scanf("%d", &m);
    int nums1[100]; 
    printf("Enter elements of first sorted array:\n");
    for (i = 0; i < m; i++)
        scanf("%d", &nums1[i]);

    
    printf("Enter size of second array: ");
    scanf("%d", &n);
    int nums2[100]; 
    printf("Enter elements of second sorted array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &nums2[i]);

    int merged[200];
    i = 0;
    j = 0;
    k = 0;

    
    while (i < m && j < n) 
{
        if (nums1[i] <= nums2[j])
            merged[k++] = nums1[i++];
        else
            merged[k++] = nums2[j++];
    }

    
    while (i < m)
        merged[k++] = nums1[i++];
    while (j < n)
        merged[k++] = nums2[j++];

    
    printf("Merged sorted array:\n");
    for (i = 0; i < m + n; i++)
        printf("%d ", merged[i]);

    return 0;
}

