#include<stdio.h>
int main ()
{
    int i,n;
    scanf ("%d",&n);
    int a[n];
    for (i=1;i<=n;i++)
    {
        scanf ("%d",&a[i]);
    }
    for (i=n;i>=1;i--)
    {
        printf ("%d ",a[i]);
    }
    return 0;
}
