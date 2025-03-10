#include<stdio.h>
int main(){
    int sum=0;
   int a[5];
   printf("enter the array elements:\n");
for(int i=0; i<5;i++){
    scanf("%d",&a[i]);
}  

for(int i=0; i<5;i++){
   for(int j=0;j<5;j++){
if (a[i]==a[j])
{
    sum++;
    if(a[j]!=a[j]){
    a[j]=0;
    }
}
printf("a[%d] is %d times repeated",a[i],sum);
printf("\n");
sum=0;
   }
}
return 0;    
}