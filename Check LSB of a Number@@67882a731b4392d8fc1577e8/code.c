// Your code here...
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);  // Read an integer

    if (num & 1) {  // Check LSB using bitwise AND
        printf("Set\n");  // LSB is 1
    } else {
        printf("Not Set\n");  // LSB is 0
    }

    return 0;
}
