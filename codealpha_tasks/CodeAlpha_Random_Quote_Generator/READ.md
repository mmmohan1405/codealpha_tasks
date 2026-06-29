Random Quote Generator

Overview

The Random Quote Generator is a console-based application developed in C. It displays a random inspirational quote each time the user selects the appropriate menu option. The application also tracks usage statistics and prevents the same quote from appearing consecutively, providing a better user experience.

Features

- Displays a random inspirational quote.
- Prevents consecutive duplicate quotes.
- Shows the quote along with the author's name.
- Tracks the total number of quotes viewed during the session.
- Displays application statistics.
- Simple, menu-driven interface.
- Clean and well-structured source code.

Technologies Used

- C Programming Language
- Standard C Libraries
  - "stdio.h"
  - "stdlib.h"
  - "time.h"

Project Structure

Random-Quote-Generator/
│
├── random_quote_generator.c
└── README.md

How to Compile and Run

Using GCC

Compile the program:

gcc random_quote_generator.c -o quote_generator

Run the executable:

./quote_generator

Using an Online Compiler

Copy and paste the source code into an online C compiler such as Programiz, OnlineGDB, or Replit, then run the program.

Sample Menu

=====================================================
               RANDOM QUOTE GENERATOR
=====================================================

1. Show Random Quote
2. View Statistics
3. Exit

Future Improvements

- Load quotes from an external text file.
- Add categories such as Motivation, Success, and Leadership.
- Save quote history between program executions.
- Allow users to add their own quotes.
- Search quotes by author.

Author

Mohan

License

This project is intended for educational and internship purposes.