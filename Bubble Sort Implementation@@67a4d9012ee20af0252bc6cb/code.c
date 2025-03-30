// Your code here...
int bubblesortSort(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            swap(arr,n,i);
        }
    }
}
int *swap(int arr[],int n,int i){
    int temp=i;
    i=i+1;
    i+1=temp;
    

}