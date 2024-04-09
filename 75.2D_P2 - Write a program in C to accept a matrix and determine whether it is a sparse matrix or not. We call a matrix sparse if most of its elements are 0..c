#include<stdio.h>
int main ()
{
    int i,j,n,m,count=0;
    scanf ("%d %d",&n,&m);
    int arr[n][m];
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            scanf ("%d",&arr[i][j]);
        }
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            if (arr[i][j]==0)
            {
                count++;
            }
        }
    }
    if (count>(n*m)/2)
    {
        printf ("This matrix is sparse.\n");
    }
    else
    {
        printf ("This matrix is not sparse.\n");
    }
    return 0;
}
