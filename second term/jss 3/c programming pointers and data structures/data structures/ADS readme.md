Array data structure
Book Inventory Management System

This simple Book Inventory Management System is written in C and allows you to manage a catalog of books. The program provides basic functionalities to add books to the inventory and display the existing catalog.

How to Use
Run the Program:

Execute the compiled program in your C environment.
Menu Options:

Enter 1 to add a new book.
Enter 2 to display the book inventory.
Enter 0 to exit the program.

Adding a Book:
When prompted, enter the book title, author, and publication year.
The program will notify you if the book is successfully added.

Displaying Inventory:
Choose option 2 to view the list of books in the catalog.
The program will display book details, including title, author, and publication year.
Important Notes
The maximum number of books the inventory can hold is set to 5.
Code Structure
main.c:

The main program logic resides here.
Functions for adding books (addBook) and displaying the inventory (displayInventory) are implemented.
Function: addBook:

Collects information about a new book from the user.
Checks if the inventory is full before adding a new book.
Function: displayInventory:

Displays the list of books in the inventory.
Notifies if the inventory is empty.