#include<stdio.h>
int main() {
    int a[3][3],i,j,D=0;
    printf("enter element of an array:\n");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix is :\n");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    D=a[0][0]*((a[1][1]*a[2][2]-a[2][1]*a[1][2]))-
      a[0][1]*((a[1][0]*a[2][2]-a[1][2]*a[2][0]))+
      a[0][2]*((a[1][0]*a[2][1]-a[1][1]*a[2][0]));

    printf("determinant is :\n");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            printf("%d ",D);
        }
        printf("\n");
    }
return 0;
}