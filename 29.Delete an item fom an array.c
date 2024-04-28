#include <stdio.h>
int main()
{
    int n, x;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    if (x < 0 || x >= n)
    {
        printf("Invalid index. Deletion failed.\n");
        return 1;
    }
    for (int i = x; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
