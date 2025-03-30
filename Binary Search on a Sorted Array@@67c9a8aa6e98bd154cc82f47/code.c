// Your code here...
int binarySearch(int arr[],int n,int target){
    int start=0;
    int last=n-1;
    
    
    for(int i=start;i<=last;i++){
        int mid = start + (last - start) / 2;
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
