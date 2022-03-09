#include<stdio.h>
void main()
{
   char name[50],branch[50],hobbies[50];
   int regd;
   printf("enter the name  ");
   fgets(name,sizeof(name),stdin);
   
   printf("enter the  branch  ");
   fgets(branch,sizeof(branch),stdin);
   printf("enter the hobbies  ");
   fgets(hobbies,sizeof(hobbies),stdin);
   printf("enter the  registration number ");
   scanf("%d",&regd);
printf("Your Name is %s your branch is %s your hobbies is %s and your registration number is %d",name,branch,hobbies,regd);
}