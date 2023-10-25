#include<stdio.h>
void travesrseArray(int arr[],int n) {
    for(int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
}
int main() {
    int arr[]={2,5,3,7,4,6};
    int n=6;
    travesrseArray(arr,n);

    
}