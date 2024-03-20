#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int min_number = INT_MAX;
    int min_position = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min_number)
        {
            min_number = a[i];
            min_position = i + 1;
        }
    }
    printf("%d %d\n", min_number, min_position);
    return 0;
}
