// Your code here...
// Your code here...
#include<stdio.h>
int peak(int arr[],int n){
    int found=0;
    for(int i=0;i<n-1;i++){
        if(arr[i+1]>arr[i] && arr[i-1]<arr[i]){
            found=1;
            printf("%d",arr[i]);
            break;
        }  
    }
    if (!found){
        return -1;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
        
    }
    printf("%d",peak(arr,n));
    return 0;
}
