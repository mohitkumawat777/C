/*write a c program which store information of 10 students in a structure using loop for each student structure
 maintain roll no, name of student ,admission year ,category*/

#include<stdio.h>
struct info{
  int roll_no;
  char name[50];
  int year;
  char category[50];
};
struct student{
 struct info infor;
};
int main(){
struct student students[10];
for(int i=1; i<=1;i++){
    printf("enter your roll number: \n");
    scanf("%d",&students[i].infor.roll_no);

    printf("enter your name: \n");
 scanf("%s",&students[i].infor.name);

  printf("enter your admission year: \n");
 scanf("%d",&students[i].infor.year);
  printf("enter your category: \n");
 scanf("%s",&students[i].infor.category);
}
for(int i=1; i<=1;i++){
    printf("\nenter your roll number: \n");
    printf("%d",students[i].infor.roll_no);

    printf("\nenter your name: \n");
 printf("%s",students[i].infor.name);

  printf("\nenter your admission year: \n");
 printf("%d",students[i].infor.year);
  printf("\nenter your category: \n");
 printf("%s",students[i].infor.category);
}
return 0;
}