// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n-1;i++){
        scanf("%d ",&arr[i]);
        
    }
    checksort(arr);
    return 0;
}
void checksort(int arr){
    int sorted=1;
    for(int i=0;i<n-1;i++){
        if(arr[i+1]!>arr[i]){
            sorted=0;
            break;
        }
        
        
    }
    if (sorted){
        printf("Sorted");
    }else{
        printf("Not Sorted");
    }
    return 0;
}