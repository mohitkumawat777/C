#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a number for adding loop values: ");
    scanf("%d",&a);
    c=0;
    for(b=1; b<=a;b++){
c=c+b;
    }
    printf("%d",c);
    return 0;
    
}