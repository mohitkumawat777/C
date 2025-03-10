#include<stdio.h>
int main(){
int size,max,min,i;
printf("Enter the size of array: ");
scanf("%d",&size);
int array[size];
printf("enter the elements of array:\n ");
for(i=0;i<size;i++){
scanf("%d",&array[i]);
}
max=array[0];
for(i=0; i<size;i++){
if (max < array[i])
{
    max=array[i];
}
}
printf("maximum number: %d\n",max);

min=array[0];
for(i=0; i<size;i++){
if (array[i]<min)
{
    min=array[i];
}
}
printf("minimum number: %d",min);
return 0;
}