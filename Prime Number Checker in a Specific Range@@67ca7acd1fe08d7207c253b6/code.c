// Your code here...
bool isPrime(int num){
    if(num<=1){
        return false;
    }
    for(int i=2;i*i<=num;i++){
        if(i%2==0){
            return false;
        }
    }
    return true;
}
int printPrimesInRange(int a,int b){
    if(a>b||b<2){
        printf("No prime numbers");
        return 0;
    }
    int f=0;
    for(int i=(a<2?2:a);i<=b;i++){
        if(isPrime(i)){
            printf("%d ",i);
            f=1;
        }
    }
    if(!f){
        printf("No prime numbers");
    }
    return 0;
}
