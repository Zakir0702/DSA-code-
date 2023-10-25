#include<stdio.h>
void DeletionArray(int a[],int n,int index) {
    int deleted_item=a[index];
    for(int i=index;i<n-1;i++) {
        a[i]=a[i+1];
    }
    n=n-1;
    printf("deleted item is %d\n",deleted_item);
    printf("modified array is\n");
    for(int i=0;i<n;i++) {
        printf("%d ",a[i]);
    }

}
void main() {
    int a[20],index,n;
    printf("enter size of an array");
    scanf("%d",&n);
    printf("enter element of an array\n");
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    printf("enter index to be deleted:\n");
    scanf("%d",&index);
    DeletionArray(a,n,index);
}