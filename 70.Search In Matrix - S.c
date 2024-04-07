#include<stdio.h>
int main ()
{
    int i,j,n,m,x,found;
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
    found = 0;
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            if (arr[i][j]==x)
            {
                found++;
                break;
            }
        }
        if (found==1)
        {
            break;
        }
    }
    if (found==1)
    {
        printf("will not take number\n");
    }
    else
    {
        printf("will take number\n");
    }
    return 0;
}
