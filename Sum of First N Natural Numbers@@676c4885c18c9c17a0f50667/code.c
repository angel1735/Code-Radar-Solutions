#include <stdio.h>

int main() {
    int sum,N;
    scanf("%d",N);
    for(int i=1;i<=N;i++){
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}