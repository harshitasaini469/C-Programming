#include <stdio.h>
#include <stdlib.h>
#define DATA_SIZE 100
void main()
{
    char ch;
    char data[DATA_SIZE];

    FILE *fptr; // pointer to hold referene to the file

    fptr = fopen("writing.txt", "w"); // file name and mode
     

    if (fptr == NULL)
    {
        printf("unable to open the file\n");
        exit(EXIT_FAILURE);
    }

    printf("file opened successfully\n");

    fputc('o', fptr);
    fputs("\nthis is the file for writing", fptr);

    printf("writing successfull");

    fclose(fptr);
}