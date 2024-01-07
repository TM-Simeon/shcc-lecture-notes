#include <stdio.h>

// Define the maximum number of books in the catalog
#define MAX_BOOKS 5

// Function prototypes
void addBook(char titles[][50], char authors[][30], int years[], int *numBooks);
void displayInventory(const char titles[][50], const char authors[][30], const int years[], int numBooks);

int main() {
    char bookTitles[MAX_BOOKS][50];
    char bookAuthors[MAX_BOOKS][30];
    int publicationYears[MAX_BOOKS];
    int numBooks = 0;
    int choice;

    do {
        // Display menu
        printf("\nBook Inventory Menu:\n");
        printf("1. Add Book\n");
        printf("2. Display Inventory\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Perform the selected action
        switch (choice) {
            case 1:
                addBook(bookTitles, bookAuthors, publicationYears, &numBooks);
                break;
            case 2:
                displayInventory(bookTitles, bookAuthors, publicationYears, numBooks);
                break;
            case 0:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 0);

    return 0;
}

// Function to add a book to the inventory
void addBook(char titles[][50], char authors[][30], int years[], int *numBooks) {
    if (*numBooks < MAX_BOOKS) {
        printf("Enter book title: ");
        scanf(" %[^\n]", titles[*numBooks]);

        printf("Enter book author: ");
        scanf(" %[^\n]", authors[*numBooks]);

        printf("Enter publication year: ");
        scanf("%d", &years[*numBooks]);

        (*numBooks)++;
        printf("Book added successfully!\n");
    } else {
        printf("Inventory is full. Cannot add more books.\n");
    }
}

// Function to display the book inventory
void displayInventory(const char titles[][50], const char authors[][30], const int years[], int numBooks) {
    printf("\nBook Inventory:\n");
    for (int i = 0; i < numBooks; ++i) {
        printf("Book %d:\n", i + 1);
        printf("Title: %s\nAuthor: %s\nYear: %d\n\n", titles[i], authors[i], years[i]);
    }

    if (numBooks == 0) {
        printf("The inventory is empty.\n");
    }
}
