#include<stdio.h>
int main ()
{
    int i,n,isPalindrome;
    scanf ("%d",&n);
    int a[n];
    for (i=0; i<n; i++)
    {
        scanf ("%d",&a[i]);
    }
    isPalindrome = 1;
    for (i=0; i<n/2; i++)
    {
        if (a[i]!=a[n-1-i])
        {
            isPalindrome=0;
            break;
        }
    }
    if (isPalindrome)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
