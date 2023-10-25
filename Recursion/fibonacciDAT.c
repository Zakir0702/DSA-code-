#include<stdio.h>
int DAT[101];
int fib(int n){
    if(n==1||n==2) {
        return DAT[n]=n-1;
    }
    else{
        if(DAT[n]==0){
            DAT[n]=(fib(n-1)+fib(n-2));
        }
        return DAT[n];
    }
}
void main() {
   for(int i=0;i<100;i++) {
    printf("%d\t",i,fib(i));
   }

}