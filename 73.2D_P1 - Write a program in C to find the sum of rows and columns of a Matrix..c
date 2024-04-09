#include<stdio.h>
int main ()
{
    int i,j,n,m,row,col;
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
        row=0;
        for (j=0;j<m;j++)
        {
            row+=arr[i][j];
        }
        printf ("%d\n",row);
    }

    for (j=0;j<m;j++)
    {
        col=0;
        for (i=0;i<n;i++)
        {
            col+=arr[i][j];
        }
        printf ("%d\n",col);
    }
    return 0;
}
