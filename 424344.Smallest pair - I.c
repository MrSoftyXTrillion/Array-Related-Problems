#include<stdio.h>
#include<limits.h>
int main ()
{
    int t,smaller_sum,current_sum;
    scanf ("%d",&t);
    while (t--)
    {
        int n;
        scanf ("%d",&n);
        int arr[n];
        for (int i=0;i<n;i++)
        {
            scanf ("%d",&arr[i]);
        }
        smaller_sum = INT_MAX;
        for (int i=0;i<n;i++)
        {
            for (int j=i+1;j<n;j++)
            {
                current_sum = arr[i] + arr[j] + j - i;
                if (current_sum<smaller_sum)
                {
                    smaller_sum = current_sum;
                }
            }
        }
        printf ("%d\n",smaller_sum);
    }
    return 0;
}
