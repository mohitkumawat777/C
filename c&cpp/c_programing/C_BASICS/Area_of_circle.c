#include<stdio.h>
int main(){
float pi=3.14159;
float radius ,totalarea;
printf("Enter the radius of circle: ");
scanf("%f",&radius);
totalarea= pi*radius*radius;
printf("area of the circle is: %f CM^2",totalarea);
return 0;
}