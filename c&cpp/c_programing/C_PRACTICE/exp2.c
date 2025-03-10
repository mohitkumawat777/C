#include<stdio.h>
int main(){
int i,j,sum=0;
printf("enter the limit\n");
scanf("%d",&j);
for(i=0; i<=j;i++){
if(i%2==0){
    sum=sum+i;

}

}
    printf("%d",sum);
    return 0;
}