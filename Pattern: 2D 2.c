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
            if (i==j)
            {
                printf ("1 ");
            }
            else
            {
                printf ("0 ");
            }
        }
        printf ("\n");
    }
    return 0;
}
