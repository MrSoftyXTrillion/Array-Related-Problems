#include<stdio.h>
int main ()
{
    int n,start,end,i;
    scanf ("%d",&n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf ("%d",&arr[i]);
    }
    scanf ("%d",&start);
    scanf ("%d",&end);
    for (i=start;i<=end;i++)
    {
        printf ("%d ",arr[i]);
    }
    return 0;
}
