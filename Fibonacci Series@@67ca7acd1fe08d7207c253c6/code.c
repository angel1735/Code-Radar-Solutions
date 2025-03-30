// Your code here...
int fibonacciSeries(int n){
    if(n==1){
        printf("0 ");
    }
    if(n==2){
        printf("0 1");
    }
    else{
        int a=0,b=1;
        printf("%d %d",a,b);
        for(int i=2;i<n;i++){
            int c=a+b;
            a=b;
            b=c;
            printf("%d ",c);
            
        
    }
    }
    
}