#include<stdio.h>
int main() {
    int n,m,i,j,sum=0;
    printf("enter number of row:");
    scanf("%d",&n);
    printf("enter number of coloum:");
    scanf("%d",&m);
    printf("enter all element of matrix:");
    int a[n][m];
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix is:\n");
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            printf("%d\t",a[i][j]);
            sum=sum+a[i][j];
        }
        printf("\n");
    }
    printf("sum is =%d",sum);
}