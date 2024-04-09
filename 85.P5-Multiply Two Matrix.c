#include<stdio.h>
int main ()
{
    int i,j,n,m,k,l,o,p;
    scanf ("%d %d",&n,&m);
    int arr1[n][m];
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            scanf ("%d",&arr1[i][j]);
        }
    }
    scanf ("%d %d",&o,&p);
    int arr2[o][p];
    for (k=0;k<o;k++)
    {
        for (l=0;l<p;l++)
        {
            scanf ("%d",&arr2[k][l]);
        }
    }
    if (m==o)
    {
        int arr[n][p];
        for (i = 0; i < n; i++)
        {
            for (l = 0; l < p; l++)
            {
                arr[i][l] = 0;
                for (j = 0; j < m; j++)
                {
                    arr[i][l] += arr1[i][j] * arr2[j][l];
                }
            }
        }

        for (i=0;i<n;i++)
        {
            for (l=0;l<p;l++)
            {
                printf ("%d ",arr[i][l]);
            }
            printf ("\n");
        }
    }
    else
    {
        printf ("Cannot multiply.\n");
    }
    return 0;
}
