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
        if (arr[i]>0)
        {
            count++;
            printf ("%d ",arr[i]);
        } 
    }
    printf ("\n");
    printf ("%d\n",count);
    return 0;
}
