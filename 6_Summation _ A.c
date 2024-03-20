#include<stdio.h>
#include<math.h>
int main ()
{
    long long int i,n,sum=0;
    scanf ("%lld",&n);
    long long int a[n];
    for (i=1;i<=n;i++)
    {
        scanf ("%lld",&a[i]);
    }
    for (i=1;i<=n;i++)
    {
        sum+=a[i];
    }
    printf ("%lld\n",abs(sum));
    return 0;
}
