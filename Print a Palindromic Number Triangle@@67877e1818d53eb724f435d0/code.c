// Your code here...
#include <stdio.h>

void printPalindromicTriangle(int n) {
    
        // Print leading spaces for acute triangle shape
        for(int i=1;i<=n;i++){
            for(int space=1;space<=n-i;space++){
                printf(" ");
            }
            for(int j=1;j<=i;j--){
                printf("%d",j);
            }
            for(int j=i-1;j>=1;j--){
                 printf("%d ", j);
            }
        }
        
        
        printf("\n");
    }


int main() {
    int n;
    
    scanf("%d", &n);
    
    printPalindromicTriangle(n);
    
    return 0;
}