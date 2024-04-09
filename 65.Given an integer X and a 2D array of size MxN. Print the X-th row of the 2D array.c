#include<stdio.h>
int main ()
{
    int i,j,m,n,x;
    scanf ("%d %d",&n,&m);
    int arr[n][m];
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            scanf ("%d",&arr[i][j]);
        }
    }
    scanf ("%d",&x);
    for (i=x;i<x+1;i++)
    {
        for (j=0;j<n;j++)
        {
            printf ("%d ",arr[i][j]);
        }
    }
    return 0;
}
