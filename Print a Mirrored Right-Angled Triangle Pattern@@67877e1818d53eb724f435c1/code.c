// Your code here...
#include<stdio.h>
int main(){
    int n,space;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(space=n-i;space>0;space--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    
    return 0;
}

// #include <stdio.h>

// int main() {
//     int n, space;
    
    
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++) {  
//         // Print spaces
//         for (space = n - i; space > 0; space--) {
//             printf(" ");
//         }

//         // Print numbers
//         for (int j = 1; j <= i; j++) {
//             printf("*");
//         }

//         printf("\n");  // Move to the next line
//     }

//     return 0;
// }

