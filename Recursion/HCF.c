#include<stdio.h>
int printHCF(int a,int b) {
    if(a%b==0){
        return b;
    }
    return printHCF(b,a%b);
}
void main() {
    int a,b;
    printf("enter a and b\n");
    scanf("%d%d",&a,&b);
    int ans=printHCF(a,b);
    printf("%d",ans);
}