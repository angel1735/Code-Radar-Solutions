// Your code here...
#include<stdio.h>
int main(){
    int n,space;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(space<n-1;space>=1;i--){
            printf(" ");
        }
        for(int j=1;j<=n;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}