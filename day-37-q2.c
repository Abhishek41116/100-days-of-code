#include<stdio.h>
int main() {
    int m,n,i,j;
    printf("Enter the size of the matrix: ");
    scanf("%d %d", &n, &m);
    int matrix[n][m];
    printf("Enter the elements of the matrix: ");
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int transpose[m][n];
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("The transpose of the matrix is: \n");
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
