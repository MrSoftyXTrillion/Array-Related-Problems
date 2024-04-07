#include<stdio.h>
#include<limits.h>
int main ()
{
    int i,n,max_value,min_value;
    scanf ("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
    }
    min_value = INT_MAX;
    max_value = INT_MIN;
    for (i=0;i<n;i++)
    {
        if (a[i]<min_value)
        {
            min_value = a[i];
        }
        if (a[i]>max_value)
        {
            max_value = a[i];
        }
    }
    for (i=0;i<n;i++)
    {
        if (a[i]==min_value)
        {
            a[i] = max_value;
        }
        else if (a[i]==max_value)
        {
            a[i] = min_value;
        }
    }
    for (i=0;i<n;i++)
    {
        printf ("%d ",a[i]);
    }
    return 0;
}
