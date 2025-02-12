// Your code here...
#include <stdio.h>

int main() {
    char str[100];  // Declare a character array (string)

    
    fgets(str, sizeof(str), stdin);  // Read input with spaces

    printf("You entered: %s", str);  // Print the string

    return 0;
}