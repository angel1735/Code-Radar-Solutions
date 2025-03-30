// Your code here...

int swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;


}
int bubblesortSort(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            swap(&arr[i],&arr[i+1]);
        }
    }
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
