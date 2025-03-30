// // Your code here...
// int isPrime(int num){
//     if(num<=1){
//         return 0;
//     }
//     if (num == 2) return 1;
//     if (num % 2 == 0) return 0;
//     for(int i=2;i*i<=num;i++){
//         if(i%2==0){
//             return 0;
//         }
//     }
//     return 1;
// }
// int printPrimesInRange(int a,int b){
//     if(a>b||b<2){
//         printf("No prime numbers");
//         return 0;
//     }
//     int f=0;
//     for(int i=(a<2?2:a);i<=b;i++){
//         if(isPrime(i)){
//             printf("%d ",i);
//             f=1;
//         }
//     }
//     if(!f){
//         printf("No prime numbers");
//     }
//     return 0;
// }

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int printPrimesInRange(int a, int b) {
    if (b < 2 || a > b) {
        printf("No prime numbers");
        return 0;
    }

    int found = 0;
    for (int i = (a < 2 ? 2 : a); i <= b; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
            found = 1;
        }
    }

    if (!found) {
        printf("No prime numbers");
    }
    
    return 0;
}
