#include<stdio.h>
int main ()
{
    int i,n;
    scanf ("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
    }
    for (i=0;i<n/2;i++)
    {
        printf ("%d - %d\n",a[i],a[n-1-i]);
    }
    if (n%2!=0)
    {
        printf ("%d\n",a[n/2]);
    }
    return 0;
}
