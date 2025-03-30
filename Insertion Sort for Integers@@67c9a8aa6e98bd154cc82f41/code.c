// Your code here...
void insertionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int last=n-i-1;
        int maxIndex=0;
        for(int j=1;j<=last;j++){
            if(arr[j]>arr[maxIndex]){
                maxIndex=j;
            }
        }
        int temp=arr[maxIndex];
        arr[last]=arr[maxIndex];
        arr[maxIndex]=temp;
    }
}