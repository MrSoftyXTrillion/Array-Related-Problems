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
    for (i=1;i<=n;i++)
    {
        if (a[i]>0)
        {
            a[i]=1;
        }
        else if (a[i]<0)
        {
            a[i]=2;
        }
    }
    for (i=1;i<=n;i++)
    {
        printf ("%d ",a[i]);
    }
}
