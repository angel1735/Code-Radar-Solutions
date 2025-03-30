// Your code here...
int printPrimesInRange(int a,int b){
    if(b<2 && a>0){
        printf("No prime numbers");
        return 0;
    }
    for(int i=a;i*i<=b;i++){
        if(num%2==0){
            printf("No prime numbers");
        }else{
            printf("%d ",i);
        }
    }
}