// Your code here...
int binarySearch(int arr[],int n){
    int mid=n/2;
    for(int i=0;i<n;i++){
        if(target==arr[mid]){
            printf("%d",mid);
        }
        else if(target<arr[mid]){
            mid=mid/2;
        }
        else if(target>arr[mid]){
            mid/=2;
        }
    }
}
