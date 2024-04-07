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
    if (n%2==0)
    {
        for (i=0;i<n/2;i++)
        {
            if (arr[i]==arr[n-1-i])
            {
                count++;
            }
        }
    }
    else if (n%2!=0)
    {
        for (i=0;i<n/2;i++)
        {
            if (arr[i]==arr[n-1-i])
            {
                count++;
            }
        }
    }
    if (count==(n/2))
    {
        printf ("Wave form.\n");
    }
    else
    {
        printf ("Not in wave form.\n");
    }
    return 0;
}
