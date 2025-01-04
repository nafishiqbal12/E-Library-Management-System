#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure of Library

struct library {
    char book_name[40];
    char author[40];
    int pages;
    float price;
};


int main()
{

    struct library lib[200];

    char ar_nm[60], bk_nm[60];


    // available books in the library

    int i, input, count;

    i = input = count = 0;

    // useing the loop

    while (input != 5) {

        printf("\n\n"
               "WELCOME TO THE E-LIBRARY "
               "\n");
        printf("\n\n1. Add book infor"
               "mation\n2. Display "
               "book information\n");
        printf("3. List all books of "
               "given author\n");
        printf(
            "4. List the count of book"
            "s in the library\n");
        printf("5. Exit");

        // Enter the book details

        printf("\n\nEnter one of "
               "the above: ");
        scanf("%d", &input);

        // input process

        switch (input) {

        // Add book
        case 1:

            printf("Enter book name = ");
            scanf("%s", lib[i].book_name);

            printf("Enter author name = ");
            scanf("%s", lib[i].author);

            printf("Enter pages = ");
            scanf("%d", &lib[i].pages);

            printf("Enter price = ");
            scanf("%f", &lib[i].price);
            count++;

            break;



        case 2:

           printf("you have entered the following information\n");

           for (i =0;i< count;i++)  {

           printf("Book name = %s",lib[i].book_name);

           printf("\t author name = %s",lib[i].author);


           printf("\t pages = %d",lib[i].pages);

           printf("\t price = %f",lib[i].price);

           }

           break;


           case 3:

              printf("Enter author name: ");

              scanf("%s", ar_nm);

              for (i = 0; i < count; i++){

                 if (strcmp(ar_nm,lib[i].author == 0))

                  printf("%s %s %d %f",
                           lib[i].book_name,
                           lib[i].author,
                           lib[i].pages,
                           lib[i].price);
            }
            break;


            case 4:

            printf("\n No books in library : %d", count);


            break;

            case 5:

            exit(0);
            }


        }

        return 0;


    }



