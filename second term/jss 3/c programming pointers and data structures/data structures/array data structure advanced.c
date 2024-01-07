#include <stdio.h>
#include <string.h>

// Define the maximum number of books in the catalog
#define MAX_BOOKS 100

// Define the structure for a book
struct Book {
    char title[100];
    char author[50];
    int year;
};

// Function prototypes
void addBook(struct Book catalog[], int *numBooks);
void searchBook(const struct Book catalog[], int numBooks);
void displayCatalog(const struct Book catalog[], int numBooks);

int main() {
    struct Book libraryCatalog[MAX_BOOKS];
    int numBooks = 0;
    int choice;

    do {
        // Display menu
        printf("\nLibrary Catalog Menu:\n");
        printf("1. Add Book\n");
        printf("2. Search Book\n");
        printf("3. Display Catalog\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Perform the selected action
        switch (choice) {
            case 1:
                addBook(libraryCatalog, &numBooks);
                break;
            case 2:
                searchBook(libraryCatalog, numBooks);
                break;
            case 3:
                displayCatalog(libraryCatalog, numBooks);
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

// Function to add a book to the catalog
void addBook(struct Book catalog[], int *numBooks) {
    if (*numBooks < MAX_BOOKS) {
        printf("Enter book title: ");
        scanf(" %[^\n]", catalog[*numBooks].title);

        printf("Enter book author: ");
        scanf(" %[^\n]", catalog[*numBooks].author);

        printf("Enter publication year: ");
        scanf("%d", &catalog[*numBooks].year);

        (*numBooks)++;
        printf("Book added successfully!\n");
    } else {
        printf("Catalog is full. Cannot add more books.\n");
    }
}

// Function to search for a book by title
void searchBook(const struct Book catalog[], int numBooks) {
    char searchTitle[100];
    printf("Enter the title to search: ");
    scanf(" %[^\n]", searchTitle);

    int found = 0;
    for (int i = 0; i < numBooks; ++i) {
        if (strcmp(catalog[i].title, searchTitle) == 0) {
            printf("Book found!\n");
            printf("Title: %s\nAuthor: %s\nYear: %d\n", catalog[i].title, catalog[i].author, catalog[i].year);
            found = 1;
            break;  // Exit the loop once a match is found
        }
    }

    if (!found) {
        printf("Book not found in the catalog.\n");
    }
}

// Function to display the entire catalog
void displayCatalog(const struct Book catalog[], int numBooks) {
    printf("\nLibrary Catalog:\n");
    for (int i = 0; i < numBooks; ++i) {
        printf("Book %d:\n", i + 1);
        printf("Title: %s\nAuthor: %s\nYear: %d\n\n", catalog[i].title, catalog[i].author, catalog[i].year);
    }

    if (numBooks == 0) {
        printf("The catalog is empty.\n");
    }
}
