#include <stdio.h>
#include <stdlib.h>
#define DATA_SIZE 100
void main()
{
    char ch;
    char data[DATA_SIZE];

    FILE *fptr; // pointer to hold referene to the file

    fptr = fopen("creation.txt", "r"); // file name and mode

    if (fptr == NULL)
    {
        printf("unable to open the file\n");
        exit(EXIT_FAILURE);
    }

    printf("file opened successfully\n");

    do
    {
        ch = fgetc(fptr); // reading single character from the file
        putchar(ch);      // print character read on console

    } while (ch != EOF);


    fclose(fptr);
}