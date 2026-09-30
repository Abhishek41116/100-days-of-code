#include<stdio.h>
int main() {
    int n,m,i,j,sum=0;
    printf("Enter the size of the matrix (n x m): ");
    scanf("%d %d", &n, &m);
    int matrix[n][m];
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int result[n];
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            sum=sum+matrix[i][j];
        }
            result[i]=sum;
            sum=0;
    }
    printf("The sum of each row is: ");
        for(i=0;i<n;i++) {
            printf("%d ", result[i]);
        }
    return 0;
}