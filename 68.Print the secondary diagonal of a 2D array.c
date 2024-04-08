#include<stdio.h>
int main ()
{
    int i,j,n,m;
    scanf ("%d %d",&n,&m);
    int arr[n][m];
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            scanf ("%d",&arr[i][j]);
        }
    }
    for (i=0,j=n-1;i<n && j>=0;i++,j--)
    {
        printf ("%d ",arr[i][j]);
    }
    return 0;
}
