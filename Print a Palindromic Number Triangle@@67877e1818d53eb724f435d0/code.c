// Your code here...
#include <stdio.h>

void printPalindromicTriangle(int n) {
    for () {
        // Print leading spaces for acute triangle shape
        for(int i=1;i>=n;i++){
            for(int space=1;space<=n-i;space++){
                printf(" ");
            }
            for(int j=1;j>=i){
                printf("%d",j);
            }
            for(int j=i-1;j>=1;j--){
                 printf("%d ", j);
            }
        }
        
        // Print increasing numbers
        for
        
        // Print decreasing numbers (palindrome part)
        for 
        
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    
    printPalindromicTriangle(n);
    
    return 0;
}