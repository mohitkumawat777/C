#include<stdio.h>
int main(){
   int percentage=78;
   int *value=&percentage;
   printf("pointer adderss is: %p \n",value);
   printf("value of adderss is: %d\n",percentage);
   printf("new adderss is: %p",&value);


    return 0;
}