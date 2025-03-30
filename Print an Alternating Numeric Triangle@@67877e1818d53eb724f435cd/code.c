// Your code here...
#include <stdio.h>

void printAlternatingTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        int num=num%2;
        for (int j = 1; j <= i; j++) {
            num=1-num;
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    
    printAlternatingTriangle(n);
    
    return 0;
}