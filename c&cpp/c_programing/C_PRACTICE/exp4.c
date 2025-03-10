#include<stdio.h>
int main(){
char f[50],b[50],a=0;
for(int i=0; i<5;i++){
    scanf("%c",&f[i]);
}
for(int i=4; i>=0;i--){
   b[a]=f[i];
   a++;
}
a=0;
for(int i=0;i<5;i++){
   if(f[i]==b[i]){
   a++;
   }
}
if(a>=4){
    printf("it is a palandrome number");
}
   else if(a<4){
    printf("it is not palandrome");
   }
 return 0;
}