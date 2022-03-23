/*
    County Library System,
    by, Francesco Cesaroni,
    Feb 2022,
    MIT License,
    C99 Compiler,
*/

#include <stdio.h>
#include <stdlib.h>

struct Patron
{
    char name[100];
    char email[50];
    char password[30];
    int is_staff;
};
struct Book
{
    char name[100];
    char title[50];
    char author[30];
    int is_available;
};

int menu();
void execute_action(int action);
void add_patron()
{
    struct Patron patron;
    printf("enter Name: ");
    getchar();
    gets(patron.name);
    printf("enter email: ");
    gets(patron.email);
    printf("enter initial password: ");
    gets(patron.password);
    printf("enter 1 if staff 0 otherwise: ");
    scanf("%d", &patron.is_staff);
    printf("Patron %s successfully added\n", patron.name);
}
void add_book()
{
    struct Book book;
    printf("Enter book: ");
    getchar();
    gets(book.name);
    printf("Enter title: ");
    gets(book.title);
    printf("Enter name of the author: ");
    gets(book.author);
    printf("enter 1 if book 0 otherwise: ");
    scanf("%d", &book.is_available);
    printf("book %s successfully added\n", book.name);
}

int main()
{
    char title[100] = "County Library Management";
    char status[100] = "welcome Francesco";
    int action;

    printf("\n\n\n\t\t\t   ****************\n\t\t\t%s\n \t\t\t\    %s\n\t\t\t   ****************\n", title, status);
    execute_action(menu());
	return 0;
}

int menu ()
 {
    int action;

    printf("Select an action below\n");
    printf("1. Add new Patron\n");
    printf("2. view all patrons\n");
    printf("3. Add new book\n");
    printf("4. View all books\n");
    printf("Your actions: \n");
    scanf("%d", &action);
    if(action < 1 || action > 4)
    {
    	printf("invalid action\n");
	}
	return action;
}
void execute_action(int action)
{
    printf("Choice is: %d\n", action);
    switch(action) {
    case 1:
        add_patron();
        break;
    case 2:
        printf(" view all patrons\n");
        break;
    case 3:
        add_book();
        break;
    case 4:
        printf(" View all resources\n");
        break;
    default:
        printf("Wrong Entry.");

    }
}


