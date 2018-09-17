#include<stdio.h>
#include<conio.h>

void insert();
void delete(int);
void showData();

static int countStudent=0;

struct Student
{
  char name[20];
  int age;
  char branch[10];
  char year[10];
  char sem[10];
  int per;
}student[100];


void showData()
{
  int i;

  if(countStudent==0)
  {
    printf("SOORY! No record is filled yet");
    return;
  }

  printf("Name\tAge\tBranch\tYear\tSemester\tPercentage");

  for(i=0;i<countStudent;i++)
  {
     printf("%s %d %s %s %s %d",student[i].name,student[i].age,student[i].branch,student[i].year,student[i].sem,student[i].per);
  }
}


void insert()
{
   if(countStudent==100)
   {
	printf("\nSORRY! Already 100 students are registered");
	return;
   }

   countStudent++;

   printf("\nEnter Student Name");
   gets(student[countStudent].name);
   printf("\nEnter Age of the Student");
   scanf("%d",student[countStudent].age);
   printf("\nEnter Branch");
   gets(student[countStudent].branch);
   printf("\nEnter Year");
   gets(student[countStudent].year);
   printf("\nEnter Semester");
   gets(student[countStudent].sem);
   printf("Enter percentage");
   scanf("%d",student[countStudent].per);

}



void delete(int countStudent)
{
   if(countStudent==0)
   {
       printf("\nSorry! It is empty list");
       return;
   }

   printf("\t\nYou Have Deleted this record");
   printf("%s %d %s %s %s %d",student[countStudent].name,student[countStudent].age,student[countStudent].branch,student[countStudent].year,student[countStudent].sem,student[countStudent].per);
   printf("\nSuccessfully Deleted");
   countStudent--;

}


void main()
{
 char ch;
 clrscr();

 do{
 printf("\n\n\n\t\tWELCOME to MANAGEMENT SYSTEM APPLICATION\n\n");
 printf("\n\tWhat Do you want to do?");
 printf("\n\t1.Add a new Student Record?");
 printf("\n\t2.Delete a Student Record?");
 printf("\n\t3.Show all Student Records?");
 printf("\n\t4.EXIT");
 scanf(" %c",&ch);

 printf("\n\n\t\tPlease select any option");
  switch(ch)
  {
    case '1': insert();
	    break;
    case '2': delete(countStudent);
	    break;
    case '3': showData();
	    break;
    case '4': exit(0);
	    break;
  }
 }while(ch!='n');


getch();
}