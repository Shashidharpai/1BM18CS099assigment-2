#include<stdio.h>
#include<conio.h>
struct student
{
char name[20];
int age;
int marks;
}s1;
void main()
{
printf("enter the name of the student");
gets(s1.name);
printf("enter the age and marks of the student");
scanf("%d %d",&s1.age,&s1.marks);
if(s1.marks<0 && s1.marks>100)
 {
 printf("please enter the marks out of 100");
 scanf("%d",&s1.marks);
 }
if(s1.age>20 &&s1.marks>=65)
 printf("congrats you are eligible to get admitted in the college please click on link given in website");
else
 printf("sorry you have not cleared the admission criteria");
getch();
}
