// // Your code here...
// // Your code here...
// // Your code here...
// #include<stdio.h>
// void checksort(int arr[],int n){
//     int visited[n];
//     for(int i=0;i<n;i++){
//             visited[i]=0;
            
//     }
//     for(int i=0;i<n;i++){
//         if(visited[i]==1){
//             continue;
//         } 
//         int c=1;               
//         for(int j=i+1;j<n;j++){
//             if(arr[i]=arr[j]){
//                 visited[j]=1;
//                 c++;
//             }        
//         }
//     printf("%d %d\n",arr[i],c);
//     }
    
    
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d ",&arr[i]);
        
//     }
//     checksort(arr,n);
//     return 0;
// }

#include<stdio.h>

void countFrequency(int arr[], int n) {
    int visited[n];
    // Initialize visited array to 0 (not visited)
    for(int i = 0; i < n; i++) {
        visited[i] = 0;
    }
    
    for(int i = 0; i < n; i++) {
        // Skip if already counted
        if(visited[i] == 1) {
            continue;
        }
        
        int count = 1;
        // Count occurrences of arr[i]
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                visited[j] = 1; // Mark as visited
                count++;
            }
        }
        // Print the element and its frequency
        printf("%d %d\n", arr[i], count);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    // Input array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Count and print frequencies
    countFrequency(arr, n);
    return 0;
}