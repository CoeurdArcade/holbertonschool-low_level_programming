MALLOC, FREE

What is the difference between automatic and dynamic allocation ?
What is malloc and free and how to use them ?
Why and when use malloc ?
How to use valgrind to check for memory leak ?

QUIZ

What is Valgrind ?
- Answer: It's a program to validate memory allocation

How many bytes will this statement allocate ?
malloc(sizeof(int) * 4)
- Answer: 16 (4 bytes default * 4)

How many bytes will this statement allocate ?
malloc(sizeof(int) * 10)
- Answer: 40 (4 bytes default * 10)

How many bytes will this statement allocate ?
malloc(sizeof(unsigned int) * 2)
- Answer: 8 (4 bytes default * 2)

How many bytes will this statement allocate ?
malloc(sizeof(char) * 10)
- Answer: 10 (1 byte default * 10)

How many bytes will this statement allocate ?
malloc(10)
- Answer: 10 (10 bytes specified)

How many bytes will this statement allocate ?
malloc((sizeof(char) * 10) + 1)
- Answer: 11 (1 byte default * 10 + 1)
