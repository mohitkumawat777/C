#include<stdio.h>
void main(){
int A[5]={8,9,1,3,2};
int I=0;
N:
printf("%d\n",*A+I);
I++;
if(I<5) goto N;
}