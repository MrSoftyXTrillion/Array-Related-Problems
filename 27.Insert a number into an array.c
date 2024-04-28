#include<stdio.h>
int main ()
{
    int i,n;
    scanf ("%d",&n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf ("%d",&arr[i]);
    }
    int pos,num;
    scanf ("%d %d",&pos,&num);
    if (pos<0 || pos>n)
    {
        printf ("Invalid Position\n");
        return 1;
    }
    for (i=n;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos] = num;
    n++;
    for (i=0;i<n;i++)
    {
        printf ("%d ",arr[i]);
    }
    printf ("\n");
    return 0;
}
