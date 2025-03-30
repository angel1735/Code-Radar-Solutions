// Your code here...
int bubblesortSort(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            swap(&arr[i],&arr[i+1]);
        }
    }
}
int swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;


}