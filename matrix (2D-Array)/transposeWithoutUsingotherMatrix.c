#include<stdio.h>
int main() {
    int r,c,i,j;
    printf("enter number of row :");
    scanf("%d",&r);
    printf("enter number of colum:");
    scanf("%d",&c);
    int a[r][c];
    printf("enter matrix:");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix is\n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("tranpose of matrix\n");
    for(i=0;i<c;i++) {
        for(j=0;j<r;j++) {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
}