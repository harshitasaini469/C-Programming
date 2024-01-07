#include <stdio.h>
struct Book
{
    char bookName[50];
    char author[20];
    int price;
};

void main()
{
    struct Book b1, b2, b3;
    printf("enter book 1 information\n");
    printf("Name : ");
    scanf("%s", &b1.bookName);
    printf("Author : ");
    scanf("%s", &b1.author);
    printf("price :  ");
    scanf("%d", &b1.price);
    printf(" \n");
    printf("enter book 2 information\n");
    printf("Name : ");
    scanf("%s", &b2.bookName);
    printf("Author : ");
    scanf("%s", &b2.author);
    printf("price :  ");
    scanf("%d", &b2.price);
    printf(" \n");

    printf("enter book 3 information\n");
    printf("Name : ");
    scanf("%s", &b3.bookName);
    printf("Author : ");
    scanf("%s", &b3.author);
    printf("price :  ");
    scanf("%d", &b3.price);

    struct Book MostPriced;
    if (b1.price > b2.price && b1.price > b3.price)
        MostPriced = b1;
    else if (b2.price > b1.price && b2.price > b3.price)
        MostPriced = b2;
    else
        MostPriced = b3;

    struct Book LowestPriced;
    if (b1.price < b2.price && b1.price < b3.price)
        LowestPriced = b1;
    else if (b2.price < b1.price && b2.price < b3.price)
        LowestPriced = b2;
    else
        LowestPriced = b3;

    printf("the Most Expensive Book is \n");
    printf("Name : %s\n", MostPriced.bookName);
    printf("Author : %s\n", MostPriced.author);
    printf("Price : %d\n", MostPriced.price);

    printf("the least priced Book is \n");
    printf("Name : %s\n", LowestPriced.bookName);
    printf("Author : %s\n", LowestPriced.author);
    printf("Price : %d\n", LowestPriced.price);
}