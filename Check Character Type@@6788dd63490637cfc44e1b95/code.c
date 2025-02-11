#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    void main(){
        char a;
        scanf("%c",&a);
        printf("%s",isdigit(a)?"Digit":
        (isalpha(a)?(strchr("aeiouAEIOU",a)?
        "Vowel":"Consonant"):"Special Character"));
    }

    
    
}