/*Q70: Rotate an array to the right by k positions.
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n); // size of array
    
    int arr[100]; // assuming max size 100
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &k); // number of rotations
    
    k = k % n; // handle cases where k > n
    
    int result[100];
    
    // copy last k elements to the front
    for(int i = 0; i < k; i++) {
        result[i] = arr[n - k + i];
    }
    
    // copy the remaining elements
    for(int i = 0; i < n - k; i++) {
        result[k + i] = arr[i];
    }
    
    // print rotated array
    for(int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    
    return 0;
}
