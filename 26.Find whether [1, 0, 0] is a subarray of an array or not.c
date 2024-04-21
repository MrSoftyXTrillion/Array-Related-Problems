#include<stdio.h>
int main()
{
    int n;
    printf("Enter N :");
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
 
    }
    int f=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            for(int j=i+1;j<n;j++){
                if(arr[j]==0){
                    for(int k=j+1;k<n;k++){
                        if(arr[k]==0){
                            f=1;
                        }
                    }
                }
            }
        }
    }
    if(f==1){
        printf("The subarray [1, 0, 0] exists in the array.\n");
    }else{
        printf("The subarray [1, 0, 0] does not exist in the array.\n");
    }
  return 0;
}
