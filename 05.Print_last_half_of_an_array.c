#include<stdio.h>
int main ()
{
    int i,n;
    scanf ("%d",&n);
    int arr[n];
    for  (i=0;i<n;i++)
    {
        scanf ("%d",&arr[i]);
    }
    for (i=n/2+1;i<n;i++)
    {
        printf ("%d ",arr[i]);
    }
    return 0;
}
