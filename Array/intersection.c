#include<stdio.h>
int main() {
    int a[10],b[10],c[50],n,m,i=0,j=0,k=0;
    printf("enter size of 1st array:");
    scanf("%d",&n);
    printf("enter element of an 1st array:");
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    printf("enter size of 2nd array:");
    scanf("%d",&m);
    printf("enter element of an 2nd array:");
    for(j=0;j<m;j++) {
        scanf("%d",&b[j]);
    }
    i=0;
    j=0;
    k=0;
  
    while(i<n&&j<m) {
        if(a[i]<b[j]) {
            i++;
        }
        else if(a[i]==b[j]) {
            c[k]=a[i];
            i++;
            k++;
            j++;
        }
        else{
            c[k]=b[j];
            j++;
        }
    }
    if(n<m&&j<m) {
            while(j<m) {
                c[k]=b[j];
                j++;
                continue;
            }
    }
    else{
            while(i<n) {
                i++;
                continue;
            }
    }
        printf("Intersection  Array is :");
        for(i=0;i<k;i++) {
            printf("%d ",c[i]);
        }
}