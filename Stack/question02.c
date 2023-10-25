// Program for Decimal to Binary Conversion
#include<stdio.h>
int stack[50],top=-1,n;
void main() {
    printf("Enter a decimal number: ");
    scanf("%d",&n);
    int x=n;
    while(n!=0) {
        stack[top+1]=n%2;
        top++;
        n=n/2;
    }
    printf("Decimal to binaray %d is:",x);
    for (int i=top;i>=0;i--) {
        printf("%d",stack[i]);

}
}
