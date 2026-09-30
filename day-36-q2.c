/*Q72: Find the sum of all elements in a matrix.
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include<stdio.h>
int main(){
    int i,j,n,m,sum=0;
    printf("Enter the size of the matrix (n m): ");
    scanf("%d %d",&n,&m);
    int arr[n][m];
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            sum=sum+arr[i][j];
        }
    }
    printf("The sum of the elements of the matrix is: %d\n",sum);
    return 0;
}