#include<stdio.h>
int main ()
{
    int i,j,n,m,k,l,o,p,equal;
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
    if (n==o && m==p)
    {
    equal = 0;
    for (i=0,k=0;i<n && k<o;i++,k++)
    {
        for (j=0,l=0;j<m && l<p;j++,l++)
        {
            if (arr1[i][j]!=arr2[k][l])
            {
                equal = 1;
            }
        }
    }
    if (equal==1)
    {
        printf ("Not Equal\n");
    }
    else if (equal==0)
    {
        printf ("Equal\n");
    }
    }
    else
    {
        printf ("Not Equal\n");
    }
    return 0;
}
