#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n / 2; i++)
    {
        printf("%d - %d\n", arr[i], arr[n - 1 - i]);
    }
    if (n % 2 != 0)
    {
        printf("%d\n", arr[n / 2]);
    }
    return 0;
}
