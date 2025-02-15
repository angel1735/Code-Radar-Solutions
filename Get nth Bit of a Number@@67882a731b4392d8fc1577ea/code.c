#include <stdio.h>

int main() {
    int num, n;
    
    // Read number and bit position
    scanf("%d %d", &num, &n);

    // Extract the nth bit
    int bit = (num >> n) & 1;

    // Print the result (0 or 1)
    printf("%d\n", bit);

    return 0;
}
