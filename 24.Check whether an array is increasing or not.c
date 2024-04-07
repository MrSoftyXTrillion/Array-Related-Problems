#include<stdio.h>
int main ()
{
    int i,n,count=0;
    scanf ("%d",&n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf ("%d",&arr[i]);
    }
    for (i=0;i<n;i++)
    {
        if (arr[i]<arr[i+1])
        {
            count++;
        }
    }
    if (count==n-1)
    {
        printf ("Increasing\n");
    }
    else if (count>0 && count<n-1)
    {
        printf ("Not strictly increasing\n");
    }
    else
    {
        printf ("Decreasing\n");
    }
    return 0;
}
