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
    for (j=0;j<m;j++)
    {
        for (i=0;i<n;i++)
        {
            printf ("%d ",arr[i][j]);
        }
        printf ("\n");
    }
    return 0;
}
