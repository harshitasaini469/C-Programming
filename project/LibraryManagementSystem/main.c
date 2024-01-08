#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <time.h>
#include <string.h>

struct Book
{
    int id;
    char bookName[50];
    char authorName[50];
    char date[12];
} b;

struct Student
{
    int sid;
    char sName[50];
    char sClass[50];
    int sRoll;
    char bookName[50];
    char date[12];
} s;

FILE *fptr;
void addBook()
{
    char myDate[12];
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    sprintf(myDate, "%02d/%02d/%d", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
    strcpy(b.date, myDate);

    fptr = fopen("books.txt", "ab");
    printf("Enter book id : ");
    scanf("%d", &b.id);

    printf("Enter book name : ");
    fflush(stdin); // to flush input buffer
    gets(b.bookName);

    printf("Enter author name : ");
    gets(b.authorName);
    fprintf(fptr, "%d %s %s %s\n", b.id, b.bookName, b.authorName, b.date);
    fclose(fptr);

    printf("Book Added Successfully");
}

void viewBookList()
{
    system("cls");
    printf("<-------Available Books are ---------->\n");
    printf("%-10s %-30s %-20s %s\n\n", "Book id", "Book Name", "Author", "Date");

    fptr = fopen("books.txt", "r");
    if (fptr == NULL)
    {
        printf("Error opening the file for reading.\n");
        return;
    }
    fseek(fptr, 0, SEEK_SET);

    while (fscanf(fptr, "%d %s %s %s", &b.id, b.bookName, b.authorName, b.date) == 4)
    {
        printf("%-10d %-30s %-20s %s\n\n", b.id, b.bookName, b.authorName, b.date);
    }

    fclose(fptr);
}

void removeBook()
{
    int id, f = 0;
    system("cls");
    printf("<---- Remove Book --->");
    printf("\n\nEnter id to remove book\n");
    scanf("%d", &id);

    fptr = fopen("books.txt", "r");
    if (fptr == NULL)
    {
        printf("Error opening the file for reading.\n");
        return;
    }

    FILE *ft = fopen("tmp.txt", "w");
    if (ft == NULL)
    {
        printf("Error opening the file for writing.\n");
        fclose(fptr);
        return;
    }

    while (fscanf(fptr, "%d %s %s %s", &b.id, b.bookName, b.authorName, b.date) == 4)
    {
        if (id == b.id)
            f = 1;
        else
            fprintf(ft, "%d %s %s %s\n", b.id, b.bookName, b.authorName, b.date);
    }

    if (f == 1)
    {
        printf("\n\nBook deleted successfully");
    }
    else
        printf("\n\nBook not found");

    fclose(fptr);
    fclose(ft);

    remove("books.txt");
    rename("tmp.txt", "books.txt");
}

void issueBook()
{
    char myDate[12];
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    sprintf(myDate, "%02d/%02d/%d", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
    strcpy(b.date, myDate);

    int f = 0;

    system("cls");
    printf("<---- Issue Books ----->\n\n");
    printf("Enter book id to issue : ");
    scanf("%d", &s.sid);

    fptr = fopen("books.txt", "r");
    if (fptr == NULL)
    {
        printf("Error opening the file for reading.\n");
        return;
    }

    while (fscanf(fptr, "%d %s %s %s", &b.id, b.bookName, b.authorName, b.date) == 4)
    {
        if (b.id == s.sid)
        {
            strcpy(s.bookName, b.bookName);
            f = 1;
            break;
        }
    }

    if (f == 0)
    {
        printf("No Book found with this id \n");
        printf("Please try again ... \n\n");
        fclose(fptr);
        return;
    }

    fclose(fptr);

    fptr = fopen("issue.txt", "a");
    if (fptr == NULL)
    {
        printf("Error opening the file for appending.\n");
        return;
    }

    printf("Enter Student Name : ");
    scanf("%s", s.sName);

    printf("Enter Student Class : ");
    scanf("%s", s.sClass);

    printf("Enter Student Roll no. : ");
    scanf("%d", &s.sRoll);

    fprintf(fptr, "%d %s %s %d %s %s\n", s.sid, s.sName, s.sClass, s.sRoll, s.bookName, s.date);
    fclose(fptr);
}

void viewIssuedBookList()
{
    system("cls");
    printf("<------- Issued Books are ---------->\n");
    printf("%-10s %-30s %-20s %-10s %-30s %s\n\n", "s.sid", "Name", "Class", "Rollno.", "Book Name", "Date");

    fptr = fopen("issue.txt", "r");
    if (fptr == NULL)
    {
        printf("Error opening the file for reading.\n");
        return;
    }

    while (fscanf(fptr, "%d %s %s %d %s %s", &s.sid, s.sName, s.sClass, &s.sRoll, s.bookName, s.date) == 6)
    {
        printf("%-10d %-30s %-20s %-10d %-30s %s\n\n", s.sid, s.sName, s.sClass, s.sRoll, s.bookName, s.date);
    }

    fclose(fptr);
}

void main()
{
    int choice;

    while (1)
    {
        system("cls"); // clear screen;
        printf("<-------------- Library Management System -------------------->\n");
        printf("1. Add Book\n");
        printf("2. View Book List\n");
        printf("3. Remove Book\n");
        printf("4. Issue Book\n");
        printf("5. View Issued Book List\n");
        printf("0. Exit\n\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Clear the input buffer
        int c;
        while ((c = getchar()) != '\n' && c != EOF)
            ;

        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
            addBook();
            break;
        case 2:
            viewBookList();
            break;
        case 3:
            removeBook();
            break;
        case 4:
            issueBook();
            break;
        case 5:
            viewIssuedBookList();
            break;
        default:
            printf("Invalid Choice..\n\n");
        }

        printf("\n\nPress any key to continue");
        getchar();
    }
}
