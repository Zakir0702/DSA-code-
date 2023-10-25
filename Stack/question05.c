// Program for Decimal to Any Base Conversion
#include<stdio.h>
int stack[50],top=-1,n;
void main() {
    printf("Enter a decimal number: ");
    scanf("%d",&n);
    int x=n,b;
    printf("Enter any base do u want: ");
    scanf("%d",&b);
    while(n!=0) {
        stack[top+1]=n%b;
        top++;
        n=n/b;
    }
    printf("Decimal of %d conversion to %d is:",x,b);
    for (int i=top;i>=0;i--) {
        printf("%d",stack[i]);
}
}

