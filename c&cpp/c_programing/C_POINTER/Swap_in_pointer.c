#include<stdio.h>
void swap(int* a,int* b){
    // printf("before x: %d and y: %d\n",*a,*b);
int temp;
temp=*a;
*a=*b;
*b=temp;
// printf("now x: %d and y: %d",*a,*b);
}
int main(){
int x=5;
int y=10;
printf("before swaping\n x: %d and y: %d\n",x,y);
swap(&x,&y);
printf("after swaping\n x: %d and y: %d",x,y);
return 0;
}