 void swap(int* arr[],int* a,int* b){
        int temp=a;
        *a=*b;
        *b=temp;
    }
 
 void Insertion(int arr[],int n){
        for(int i=0;i<n-1;i++){
            for(int j=j+1;j>0;j--){
                if(arr[j]<arr[j-1]){
                    swap(&arr[j],&arr[j-1]);
                }else{
                    break;
                }
            }
        }
    }
    
    void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}