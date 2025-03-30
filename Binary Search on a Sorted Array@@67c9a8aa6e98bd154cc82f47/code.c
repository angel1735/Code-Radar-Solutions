// Your code here...
int binarySearch(int arr[],int n,int target){
    int mid=n/2;
    for(int i=1;i<=n;i++){
        if(target==arr[mid]){
            return mid;
        }
        else if(target<arr[mid]){
            mid=mid/2;
        }
        else if(target>arr[mid]){
            mid/=2;
        }
        
    }
    return -1;
}
