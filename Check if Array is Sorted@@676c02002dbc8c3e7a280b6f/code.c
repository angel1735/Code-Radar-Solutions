// Your code here...
#include<stdio.h>
void checksort(int arr,int n){
    int sorted=1;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            sorted=0;
            break;
        }
        
        
    }
    if (sorted){
        printf("Sorted");
    }else{
        printf("Not Sorted");
    }
    
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n-1;i++){
        scanf("%d ",&arr[i]);
        
    }
    checksort(arr,n);
    return 0;
}
