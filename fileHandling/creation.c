#include <stdio.h>
#include <stdlib.h>
#define DATA_SIZE 100
void main()
{
    char data[DATA_SIZE];

    FILE *fptr; // pointer to hold referene to the file

    fptr = fopen("creation.txt", "w"); // file name and mode

    if (fptr == NULL)
    {
        printf("unable to create file\n");
        exit(EXIT_FAILURE);
    }
    // input content from user
    printf("enter the content to store in the file\n");
    fgets(data, DATA_SIZE, stdin); // data,data size,stream;

    fputs(data, fptr); // write data to the file

    fclose(fptr);

    printf("file create and saved successfully\n");
}