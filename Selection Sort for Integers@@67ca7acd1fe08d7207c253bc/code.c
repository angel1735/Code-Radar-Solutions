 void swap(int* a,int* b){
        int temp=*a;
        *a=*b;
        *b=temp;
    }
 
 void selectionSort(int arr[],int n){
        for(int i=1;i<n;i++){
            for(int j=i;j>0;j--){
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