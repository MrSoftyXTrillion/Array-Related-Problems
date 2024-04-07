#include<stdio.h>
int main ()
{
    int i,n,pos=0,zero=0,odd=0;
    scanf ("%d",&n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf ("%d",&arr[i]);
    }
    for (i=0;i<n;i++)
    {
        if (arr[i]>0)
        {
            pos++;
        }
        printf ("%d ",arr[i]);
    }
    printf ("\n%d\n",pos);
    for (i=0;i<n;i++)
    {
        if (arr[i]==0)
        {
            zero++;
            printf ("%d ",arr[i]);
        }
    }
    printf ("\n%d\n",zero);
    for (i=0;i<n;i++)
    {
        if (arr[i]%2!=0 && arr[i]>0)
        {
            odd++;
            printf ("%d ",arr[i]);
        }
    }
    printf ("\n%d\n",odd);
    return 0;
}
