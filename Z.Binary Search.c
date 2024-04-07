#include <stdio.h>
#include <stdlib.h>
 
// Function to compare two integers (needed for qsort)
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
 
int binary_search(int arr[], int n, int x) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x)
            return 1; // Element found
        else if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return 0; // Element not found
}
 
int main() {
    int n, k, i;
    scanf("%d %d", &n, &k);
    int *arr = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    qsort(arr, n, sizeof(int), compare);
    while (k--) {
        int x;
        scanf("%d", &x);
        if (binary_search(arr, n, x))
            printf("found\n");
        else
            printf("not found\n");
    }
    return 0;
}

