#include<stdio.h>
int main ()
{
    int n,q,i,j,x,found;
    scanf ("%d %d",&n,&q);
    int a[n];
    for (i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
    }
    for (j=1;j<=q;j++)
    {
        scanf ("%d",&x);
        found = 0;
        for (i=0;i<n;i++)
        {
            if (a[i]==x)
            {
                found = 1;
                break;
            }
        }
        if (found)
        {
            printf ("found\n");
        }
        else
        {
            printf ("not found\n");
        }
    }
    return 0;
}
