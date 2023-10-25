#include<stdio.h>
#include<stdlib.h>
void insertArray(int arr[],int n,int index,int item) {
    for(int i=n;i>index;i--) {
        arr[i]=arr[i-1];
    }
    arr[index]=item;
}
void main() {
    int arr[10],n,index,item;
    printf("enter size:");
    scanf("%d",&n);
    if(n>10) {
        exit;
        printf("invalid size");
        
    }
    printf("enter element of an array:");
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("enter item to be inserted:");
    scanf("%d",&item);
    printf("enter index:");
    scanf("%d",&index);
    insertArray(arr, n, index, item);
    for(int i=0;i<=n;i++) {
        printf("%d ",arr[i]);
    }

}