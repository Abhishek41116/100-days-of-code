/*Q1: Insert an element in an array at a given position.
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40*/
#include <stdio.h>

int main() {
    int n, pos, val;
    scanf("%d", &n); // size of array
    
    int arr[100]; // assuming max size 100
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d %d", &pos, &val); // position and value to insert
    
    // shift elements to the right
    for(int i = n; i > pos-1; i--) {
        arr[i] = arr[i-1];
    }
    
    arr[pos-1] = val; // insert value
    n++; // increase size
    
    // print updated array
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}