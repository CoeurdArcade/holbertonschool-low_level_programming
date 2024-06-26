GENERAL
- What are pointers and how to use them
- What are arrays and how to use them
- What are the differences between pointers and arrays
- How to use strings and how to manipulate them
- Scope of variables

RULES
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like printf, puts, etc... is forbidden
- You are allowed to use putchar
- You don't have to push putchar.c, we will use our file
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do we won't take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function putchar should be included in your header file called main.h
- Don't forget to push your header file
- You do not need to learn about pointers to functions, pointers to pointers, multidimensional arrays, arrays of structures, malloc and free - yet.

QUIZ
- What is the size of a pointer to a char (on a 64-bit architecture)
- Answer: 8 bytes

- What is the size of a pointer to an int (on a 64-bit architecture)
- Answer: 8 bytes

- If we have a variable called var of type int, how can we get its address in memory?
- Answer: &var

- What is the identifier to print an address with printf?
- Answer: %p

- The process of getting the value that is stored in the memory location pointed to by a pointer is called:
- Answer: Dereferencing

- Is it possible to declare a pointer to a pointer?
- Answer: Yes

- What happens when one tries to access an illegal memory location?
- Answer: Segmentation fault

- What is the value of n after the following code is executed?
- int n = 98;
- int * p = &n;
- Answer: 98

- What is the value of n after the following code is executed?
- int n = 98;
- int * p = &n;
- p = 402;
- Answer: 98

- What is the value of n after the following code is executed?
- int n = 98;
- int * p = &n;
- * p = 402;
- Answer: 402

- What is the value of n after the following code is executed?
- int n = 98;
- int * p = &n;
- * p++;
- Answer: 98

- We declare the following variable
- int arr[5];
- What is the size in memory of the variable arr?
- Answer: 20 bytes

- We declare the following variable
- int arr[5];
- What is the equivalent of typing arr[2]?
- Answer: * (arr + 2)
