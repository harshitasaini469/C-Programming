#include <stdio.h>
struct
{
    char name[20];
    int age;
} Me;
void main()
{

    printf("enter name : ");
    scanf("%s", &Me.name);
    printf("enter age : ");
    scanf("%d", &Me.age);

    printf("my name is %s\n", Me.name);
    printf("my age is %d", Me.age);
}