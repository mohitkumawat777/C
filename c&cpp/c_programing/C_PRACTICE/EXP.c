#include<stdio.h>
int main(){
int arr[5],i;
for(i=0; i<5; i++){
    scanf("%d",&arr[i]);
}
if(arr[0]<arr[1] && arr[0]<arr[2] && arr[0]<arr[3] && arr[0]<arr[4] ){
printf(" largest no. of the arr is : %d", arr[0]);
}
else if(arr[1]<arr[2] && arr[1]<arr[3] && arr[1]<arr[4]){
printf(" largest no. of the arr is : %d", arr[1]);
}
else if(arr[2]<arr[3] && arr[2]<arr[4]  ){
printf(" largest no. of the arr is : %d", arr[2]);
}
else if(arr[3]<arr[4] ){
printf(" largest no. of the arr is : %d", arr[3]);
}
 else{
printf(" largest no. of the arr is : %d", arr[4]);
}
return 0;
}