// #include<stdio.h>
// int peak(int arr[],int n){
//     if (n==1){
//         return arr[0];
//     }
//     if(arr[0]>arr[1]){
//         return arr[0];
//     }
//     for(int i=1;i<n-2;i++){
//         if(arr[i]>arr[i+1] && arr[-1]<arr[i]){
//             printf("%d",arr[i]);
//             break;
//         }  
//     }
//     if(arr[n-1]>arr[n-2]){
//         return arr[n-1];
//     }
//     return -1;
    
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d ",&arr[i]);   
//     }
//     int p=peak(arr,n);
//     printf("%d",p);
//     return 0;
// }

#include<stdio.h>

int peak(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }
    
    // Check first element
    if (arr[0] > arr[1]) {
        return arr[0];
    }

    // Check middle elements
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            return arr[i];  // Return first peak found
        }
    }

    // Check last element
    if (arr[n - 1] > arr[n - 2]) {
        return arr[n - 1];
    }

    return -1;  // No peak found
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Removed extra space
    }
    
    int p = peak(arr, n);
    printf("%d", p);
    return 0;
}
