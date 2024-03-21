#include<stdio.h>
int main ()
{
    int i,n,m;
    scanf ("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
    }
    m = n/2;
    for (i=0;i<m;i++)
    {
        printf ("%d - %d\n",a[i],a[i+m]);
    }
    if (n%2!=0)
    {
        printf ("%d\n",a[n/2]);
    }
    return 0;
}
