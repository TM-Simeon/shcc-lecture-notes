Array data structure advanced.
Library Catalog Management System


This C program implements a simple Library Catalog Management System. The system allows users to add books to a catalog, search for books by title, and display the entire library catalog. It is designed to be user-friendly and provides an interactive menu for different operations.

Features

Add Book:
Users can add a new book to the library catalog by providing the title, author, and publication year.
Search Book:

Users can search for a book by its title. The program displays details if the book is found; otherwise, it notifies the user that the book is not in the catalog.

Display Catalog:
Users can view the entire library catalog, including details such as title, author, and publication year.
How to Use
Run the Program:

Compile the program using a C compiler (e.g., GCC).
Execute the compiled program to run the Library Catalog Management System.

Follow the On-Screen Menu:
Choose options by entering the corresponding numbers as prompted.
Add books, search for titles, and display the catalog according to your needs.

Exiting the Program:
Enter 0 to exit the program gracefully.
Code Structure

main.c:
Contains the main logic of the program, including the menu system and user interactions.

struct Book:
Defines the structure for a book, including title, author, and publication year.

Functions:
addBook: Adds a book to the library catalog.
searchBook: Searches for a book by title.
displayCatalog: Displays the entire library catalog.

Limitations
The maximum number of books in the catalog is set to 100.