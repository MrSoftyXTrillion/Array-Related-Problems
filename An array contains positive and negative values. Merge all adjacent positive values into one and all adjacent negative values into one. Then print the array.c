#include<stdio.h>
int main ()
{
    int i,n;
    scanf ("%d",&n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf ("%d",&arr[i]);
    }
    int brr[n];
    int sum = arr[0];
    int j=0;
    for (i=1;i<n;i++)
    {
        if ((arr[i]>=0 && sum>=0) || (arr[i]<0 && sum<0))
        {
            sum += arr[i];
        }
        else
        {
            brr[j++] = sum;
            sum = arr[i];
        }
    }
    brr[j++] = sum;
    for (i=0;i<j;i++)
    {
        printf ("%d ",brr[i]);
    }
    return 0;
}
