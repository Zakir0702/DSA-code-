// Program for Decimal to Octal Conversion
#include<stdio.h>
int stack[50],top=-1,n;
void main() {
    printf("Enter a decimal number: ");
    scanf("%d",&n);
    int x=n;
    while(n!=0) {
        stack[top+1]=n%8;
        top++;
        n=n/8;
    }
    printf("Decimal to octal conversion of %d is:",x);
    for (int i=top;i>=0;i--) {
        printf("%d",stack[i]);

}
}
