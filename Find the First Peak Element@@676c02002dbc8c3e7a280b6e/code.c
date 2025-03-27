// Your code here...
// Your code here...
#include<stdio.h>
int peak(int arr[],int n){
    
    if (n==1){
            return arr[0];
        }
        if(arr[0]>arr[1]){
            return arr[0];
        }
    for(int i=0;i<n-2;i++){
       
        if(arr[i]>arr[i+1] && arr[i-1]<arr[i]){
            
            printf("%d",arr[i]);
            //break;
        }  
    }
    if(arr[n-1]>arr[n-2]){
        return arr[n-1];
    }
    
        return -1;
    
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
