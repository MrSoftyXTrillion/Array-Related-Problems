#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d", &m,&n);
    int arr1[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &arr1[i][j]);
        }
    }
    int p,q;
    scanf("%d%d",&p,&q);
    int arr2[p][q];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d", &arr2[i][j]);
        }
    }
    int x;
    int count=0;
    scanf("%d",&x);
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        for(int k=0;k<p;k++){
            for(int l=0;l<q;l++){
                if((arr1[i][j]+arr2[k][l])==x){
                    count++;
                }
            }
        }
    }
   }
 
    printf("%d", count);
}
