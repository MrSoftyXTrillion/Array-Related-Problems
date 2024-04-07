#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        int diff = arr[i + 1] - arr[i];
        printf("%d ", diff);
    }
    printf("\n");
    return 0;
}
