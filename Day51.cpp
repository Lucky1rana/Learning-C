/*Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might
 be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence.
  Print -1, -1 if the target is not present.*/


#include <stdio.h>

int main() {
    int nums[] = {5, 7, 7, 8, 8, 10};
    int n = sizeof(nums) / sizeof(nums[0]);
    int target;
    int first = -1, last = -1;

    printf("Enter target: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (first == -1)
                first = i;
            last = i;
        }
    }

    printf("%d,%d\n", first, last);
    return 0;
}

