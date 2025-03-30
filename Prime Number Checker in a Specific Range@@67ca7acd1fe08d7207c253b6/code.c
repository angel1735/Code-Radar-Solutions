// Your code here...
int isPrime(int num){
    if(num<=1){
        return 0;
    }
    for(int i=2;i*i<=num;i++){
        if(i%2==0){
            return 0;
        }
    }
    return 1;
}
int printPrimesInRange(int a,int b){
    if(a>b||b<2){
        printf("No prime numbers");
        return 0;
    }
    int f=0;
    for(int i=a;i<=b;i++){
        if(isPrime){
            printf("%d ",i);
            f=1;
        }
    }
    if(!f){
        printf("No prime numbers");
    }
    return 0;
}
