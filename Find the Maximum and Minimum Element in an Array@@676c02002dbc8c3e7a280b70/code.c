// Your code here...
// Your code here...
#include<stdio.h>
void checksort(int arr[],int n){
    int sorted=1;
    int max=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[max]){
            max=i;
        }  
    }
    int min=0;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[min]){
            min=i;
        }  
    }
    printf("%d %d",arr[min],arr[max]);
    
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
        
    }
    checksort(arr,n);
    return 0;
}
