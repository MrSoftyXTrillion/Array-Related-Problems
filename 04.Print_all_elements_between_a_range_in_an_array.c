#include <stdio.h>
int main() {
    int n, start, end;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &start);
    scanf("%d", &end);
    for (int i = start; i <= end && i < n; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}
