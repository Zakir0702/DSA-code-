#include<stdio.h>
void reverseArray(int a[],int n) {
    int left=0,temp;
    int right=n-1;
    while(left<=right) {
        temp=a[left];
        a[left]=a[right];
        a[right]=temp;
        left++;
        right--;
    }
       for(int i=0;i<n;i++) {
        printf("Reversed array is :");
        printf("%d ",a[i]);
       
       
    }

}
void main() {
    int a[]={1,2,3,4,5,6};
    int n=6;
    reverseArray(a,n);

    
}