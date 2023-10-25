#include<stdio.h>
int main() {
    int a[10][10],b[10][10],c[10][10],i,j,k,m,n,p,q,sum;
    printf("enter row and coloum of 1st matrix");
    scanf("%d %d",&m,&n);
    printf("enter 1st matrix:");
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter row and coloum of 2nd matrix");
    scanf("%d %d",&p,&q);
    printf("enter 2nd matrix:");
    for(i=0;i<p;i++) {
        for(j=0;j<q;j++) {
            scanf("%d",&b[i][j]);
        }
    }
    printf("1st matrix is\n");
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("2nd matrix is\n");
    for(i=0;i<p;i++) {
        for(j=0;j<q;j++) {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    if(n==p) {
         for(i=0;i<m;i++) {
            for(j=0;j<q;j++) {
                sum=0;
                for(k=0;k<n;k++){
                    sum=sum+a[i][k]*b[k][j];
                }
                c[i][j]=sum;
            }
        }
        printf("multipilication is\n");
    for(i=0;i<m;i++) {
        for(j=0;j<q;j++) {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    }
    else {
         printf("can not multiply");
    }
    

}