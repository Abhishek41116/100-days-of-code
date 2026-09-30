/*Q71: Read and print a matrix.
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/
#include<stdio.h>
int main() {
    int n,m,i,j;
    printf("Enter the size of the array: ");
    scanf("%d %d",&n,&m);
    int arr[n][m];
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The elements of the array are: \n");
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
