#include<stdio.h>
int main() {
    int n=5,a[5],sum=0,s=0;
    printf("enter element of an array\n");
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    printf("Array is:\n");
    for(int i=0;i<n;i++) {
        printf("%d\t",a[i]);
    }
    for(int i=0;i<n;i++) {
        sum=sum+a[i];
    }
    for(int i=1;i<=n+1;i++) {
        s=s+i;
    }
    printf("\nmissing number is %d ",s-sum);
}