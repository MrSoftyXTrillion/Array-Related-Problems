#include<stdio.h>
int main ()
{
    int i,n,min,frequency;
    scanf ("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
    }
    min = a[0];
    for (i=1;i<n;i++)
    {
        if (a[i]<min)
        {
            min = a[i];
        }
    }
    frequency = 0;
    for (i=0;i<n;i++)
    {
        if (a[i]==min)
        {
            frequency++;
        }
    }
    if (frequency%2!=0)
    {
        printf ("Lucky\n");
    }
    else
    {
        printf ("Unlucky\n");
    }
    return 0;
}
