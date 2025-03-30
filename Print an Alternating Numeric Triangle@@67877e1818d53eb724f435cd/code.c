// Your code here...
#include <stdio.h>

void printAlternatingTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        int num=num%2;
        for (int j = 1; j <= i; j++) {
            printf("%d ",num);
            num=1-num;
        }
        printf("\n");
    }
}

int main() {
    int n;
    
    scanf("%d", &n);
    
    printAlternatingTriangle(n);
    
    return 0;
}