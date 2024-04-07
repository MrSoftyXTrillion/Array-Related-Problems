#include<stdio.h>
int main ()
{
    int i,n,p;
    scanf ("%d",&n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf ("%d",&arr[i]);
    }
    scanf ("%d",&p);
    for (i=0;i<n;i++)
    {
        if (p==arr[i])
        {
            printf ("Entered value is %d and its position is %d\n",p,i+1);
        }
    }
    return 0;
}
