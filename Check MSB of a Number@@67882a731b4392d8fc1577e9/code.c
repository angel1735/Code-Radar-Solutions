// Your code here...
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);  // Read an integer

    int msb = 1 << (sizeof(int) * 8 - 1);  // Get the MSB position
    if (num & msb) {  // Check MSB using bitwise AND
        printf("Set\n");  // MSB is 1
    } else {
        printf("Not Set\n");  // MSB is 0
    }

    return 0;
}
