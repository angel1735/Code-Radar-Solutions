// Your code here...
#include <stdio.h>

int main(){
    int n,i;
    
    scanf("%d",&n);
    if(n<2)
    {
        printf("not a prime number.\n");
        return 0;
    }
    for(i=2;i*i<=n;i++) {
        if(n%i==0) {
            printf("Not Prime.\n");
        }
        else{
            printf("Prime.\n");
            }
    }
    return 0;
}

