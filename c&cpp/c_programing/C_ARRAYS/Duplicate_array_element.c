#include<stdio.h>
int main(){
int array[10],count=0,a;

printf("enter the array\n");
for(int i=0; i<10;i++){
    scanf("%d",&array[i]);
}                   

for(int j=0; j<10; j++){
    a=array[j];
    for(int k=0; k<10; k++){
        array[k];
        if (array[j]== array[k])
        {
            count++;
        }     
    }
    
printf("%d :%dX\n",a,count);
count=0;

}
return 0;
}

