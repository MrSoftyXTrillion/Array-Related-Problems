#include<stdio.h>
#include<math.h>
int main() {
    int i, j, n, sum1 = 0, sum2 = 0,z;
    scanf("%d", &n);
    int arr[n][n];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0, j = 0; i < n && j < n; i++, j++) {
        sum1 += arr[i][j];
    }
    for (i = 0, j = n - 1; i <n && j >= 0; i++, j--) {
        sum2 += arr[i][j];
    }
    z = sum1 - sum2;
    printf ("%d\n",abs(z));
    return 0;
}
