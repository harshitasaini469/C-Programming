#include <stdio.h>
struct Student
{
    char name[20];
    int age;
    float totalMarks;
};

void main()
{
    struct Student s1, s2;
    float avg;
    printf("enter first student's name ");
    scanf("%s", s1.name);
    printf("enter student s1 age ");
    scanf("%d", &s1.age);
    printf("enter student s1 total marks ");
    scanf("%f", &s1.totalMarks);
    printf("\n");

    printf("enter student s2 name ");
    scanf("%s", s2.name);
    printf("enter student s2 age ");
    scanf("%d", &s2.age);
    printf("enter student s2 total marks ");
    scanf("%f", &s2.totalMarks);

    printf("s1 name = %s \ns2 name = %s\n", s1.name, s2.name);
    printf("s1 age = %d \ns2 age = %s\n", s1.age, s2.age);
    avg = (s1.totalMarks + s2.totalMarks) / 2;
    printf("average of their marks is %f ", avg);
}