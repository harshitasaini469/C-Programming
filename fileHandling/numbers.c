#include <stdio.h>
#include <stdlib.h>
#define DATA_SIZE 100
int isEven(const int);
void main()
{
    int num, success;

    FILE *fptrIn;
    FILE *fptrEven;
    FILE *fptrOdd;

    fptrIn = fopen("numbers.txt", "r"); // file name and mode
    fptrEven = fopen("even.txt", "w");
    fptrOdd = fopen("odd.txt", "w");

    if (fptrIn == NULL || fptrEven == NULL || fptrOdd == NULL)
    {
        printf("unable to create file\n");
        exit(EXIT_FAILURE);
    }
    // input content from user
    while (fscanf(fptrIn, "%d", &num) != -1)
    {
        if (isEven(num))
            fprintf(fptrEven, "%d\n", num);
        else
            fprintf(fptrOdd, "%d\n", num);
    }

    fclose(fptrIn);
    fclose(fptrEven);
    fclose(fptrOdd);

    printf("file created and saved successfully\n");
}
int isEven(const int NUM)
{
    return !(NUM & 1);
}