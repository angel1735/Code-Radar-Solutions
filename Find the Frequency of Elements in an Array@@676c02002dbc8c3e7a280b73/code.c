// Your code here...
// Your code here...
// Your code here...
#include<stdio.h>
void checksort(int arr[],int n){


    int visited[n],c=0;
    for(int i=0;i<n;i++){
            visited[i]=0;
            
        }
    for(int i=0;i<n;i++){
        if(visited[i]=1){
            continue;
        }
            
        
    
        for(int j=i+1;j<n;j++){
            if(arr[j]=arr[i]){
                visited[i]=1;
                c++;
            }

        
    }
    printf("%d %d",arr[i],c);
    }
    
    
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
