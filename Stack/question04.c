// Program for Decimal to Hexadecimal Conversion
#include<stdio.h>
int stack[50],top=-1,n;
void main() {
    printf("Enter a decimal number: ");
    scanf("%d",&n);
    int x=n,r;
    char a;
    while(n!=0) {
        r = n%16;
        if(r==)
        stack[top+1]=n%16;
        top++;
        n=n/16;

    }
    printf("Decimal to hexadecimal %d is:",x);
    for (int i=top;i>=0;i--) {
        printf("%d",stack[i]);

}
}
