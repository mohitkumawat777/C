#include<stdio.h>
void factorial(int a){
    int facto=1;
   for(int i=1; i<=a; i++){
       facto=facto*i;
   } 
  printf("Factorial of %d! is: %d",a,facto);
}
int main(){
    int x;
printf("enter a number for factorial: ");
scanf("%d",&x);
factorial(x);
    
return 0;
}