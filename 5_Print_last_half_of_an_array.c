#include<stdio.h>
int main ()
{
    int i,start,end,n;
    scanf ("%d",&n);
    int a[n];
    for (i=1;i<=n;i++)
    {
        scanf ("%d",&a[i]);
    }
    for (i=(n/2)+1;i<=n;i++)
    {
        printf ("%d\n",a[i]);
    }
    return 0;
}
