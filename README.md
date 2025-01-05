### E-Library Management System 📚

This C program simulates a basic **E-Library Management System**. It allows users to manage a collection of books, including adding, displaying, and searching for books. The program utilizes structures to store book details and implements a menu-driven interface for user interaction.

---

#### **Features**
1. **Add Book Information**  
   - Input and store details such as the book name, author, number of pages, and price.

2. **Display All Books**  
   - List all the books stored in the library along with their details.

3. **Search Books by Author**  
   - Retrieve and display all books by a specific author.

4. **Count Total Books**  
   - Display the total number of books currently in the library.

5. **Exit the Program**  
   - Safely exit the library management system.

---

#### **How It Works**
- **Structure Definition:**  
  A `struct` is used to define the properties of a book: `book_name`, `author`, `pages`, and `price`.  
- **Menu-Driven Input:**  
  The program operates in a loop, presenting a menu with five options for the user to select actions.  
- **Book Storage:**  
  An array of structures stores up to 200 books. Each book's details are added sequentially.  
- **String Operations:**  
  Functions like `strcmp` are used to compare strings (e.g., to find books by a specific author).  
- **Dynamic Display:**  
  The program dynamically displays the list of books and relevant information based on user input.

---

#### **Usage**
1. Compile the program using a C compiler:  
   ```bash
   gcc -o e_library e_library.c
   ```
2. Run the compiled program:  
   ```bash
   ./e_library
   ```
3. Follow the menu to interact with the library system.

---

#### **Potential Enhancements**
- Allow input of multi-word book or author names using `fgets` instead of `scanf`.
- Add persistent storage (e.g., using files) to save and load book data.
- Improve search functionality with partial string matches.
- Enhance the user interface for better usability.

---

Feel free to fork and modify the program as needed! 🚀
