GENERAL

What are the arithmetic operators and how to use them ?
What are the logical operators (sometimes called boolean operators) and how to use them ?
What the the relational operators and how to use them ?
What values are considered TRUE and FALSE in C ?
What are the boolean operators and how to use them ?
How to use the if, if ... else statements ?
How to use comments ?
How to declare variables of types char, int, unsigned int ?
How to assign values to variables ?
How to print the values of variables of type char, int, unsigned int with printf ?
How to use the while loop ?
How to use variables with the while loop ?
How to print variables using printf ?
What is the ASCII character set ?
What are the purpose of the gcc flags -m32 and -m64 ?

QUIZ

What is the size of the unsigned int data type?
4 bytes

What is the size of the char data type?
1 byte

What is the size of the float data type?
4 bytes

Which of the following are valid if statements in ANSI C and Betty-compliant? (Considering a and b two variables of type int) ?
Correct answers:
if (a > b)
{
  return (a);
}

---------



if (a > b)
  return (a);


Which of the following are valid for statements in ANSI C and Betty-compliant? (Considering a and b two variables of type int) ?
Correct answers:
for (a = 0; a < b; a++)
{
    printf("%d\n", a);
}

---------

for (a = 0; a < b; a++)
    printf("%d\n", a);


--------

a = 0;
for (; a < b;)
{
    printf("%d\n", a++);
}


Which of the following are valid while or do/while statements in ANSI C and Betty-compliant? (Considering a and b two variables of type int) ?
Correct answers:
a = 0;
while (a < b)
{
    printf("%d\n", a);
    a++;
}

----------

a = 0;
do {
    printf("%d\n", a);
    a++;
} while (a < b);

---------

a = 0;
while (a < b)
    printf("%d\n", a++);

TOOLS

ascii (You do not need to learn about scanf, getc, getchar, EOF, EXIT_SUCCESS, time, rand, srand, RAND_MAX, for loops, do...while loops, functions.)


