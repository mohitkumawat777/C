#include<stdio.h>
int main(){
int lim,a=0,b=1,next=0;
printf("enter the limit \n");
scanf("%d",&lim);
printf("%d,",a);
printf("%d,",b);
for (int i=3;i<=lim;i++)
{
next=a+b;
printf("%d,",next);
a=b;
b=next;
}

}