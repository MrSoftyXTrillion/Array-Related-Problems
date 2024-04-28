#include<stdio.h>
int main ()
{
    int i,j,m,n;
    scanf ("%d %d",&m,&n);
    int arr[m][n];
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf ("%d",&arr[i][j]);
        }
    }
    int sum=0;
    for (j=0;j<n;j++)
    {
        for (i=0;i<m;i++)
        {
            if (arr[i][j]==1)
            {
                sum++;
            }
        }
        if (sum==n)
        {
            for (i = 0; i < m; i++)
            {
                printf("%d\n", arr[i][j]);
            }
        }
        sum=0;
    }
    return 0;
}
