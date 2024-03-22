#include<stdio.h>
int main ()
{
    int i,n;
    scanf ("%d",&n);
    int fib[n];
    fib[1]=0;
    fib[2]=1;
    for (i=3;i<=n;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    printf ("%d ",fib[n]);
    return 0;
}
