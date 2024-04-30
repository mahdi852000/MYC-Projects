#include <stdio.h>
#include <stdlib.h>


struct student
    {
        int id;
        char *firstName;
        char *lastName;
        float gpa;
    };
void DisplayStudentInformation (struct student stu);
void DisplayStudentInformation2(struct student *pstu);

int main()
{

    struct student stu1;
    stu1.id = 101;
    stu1.firstName ="Ali";
    stu1.lastName ="ALavi";
    stu1.gpa = 18.5;

    struct student stu2 = {102,"Reza","Razavi",17.36};

    printf("Using First Function (By Value):\n");
    DisplayStudentInformation(stu1);
    DisplayStudentInformation(stu2);
    DisplayStudentInformation(stu1);

    printf("Using Second Function (By Reference):\n");
    DisplayStudentInformation2(&stu1);
    DisplayStudentInformation2(&stu2);
    DisplayStudentInformation2(&stu1);

    return 0;
}

void DisplayStudentInformation (struct student stu)
{
    printf("Student Information:\n");
    printf("Student ID:%d\n",stu.id);
    printf("First Name:%s\n", stu.firstName);
    printf(" Last Name:%s\n",stu.lastName);
    printf("       GPA:%.2f\n",stu.gpa);
    printf("\n");
    stu.id+=1000;
    printf("New ID:%d\n",stu.id);
    printf("\n");
}

void DisplayStudentInformation2(struct student *pstu)
{
  printf("Student Information:\n");
    printf("Student ID:%d\n",pstu->id);
    printf("First Name:%s\n", pstu->firstName);
    printf(" Last Name:%s\n",pstu->lastName);
    printf("       GPA:%.2f\n",pstu->gpa);
    printf("\n");
    pstu->id+=1000;
    printf("New ID:%d\n",pstu->id);
    printf("\n");
}
