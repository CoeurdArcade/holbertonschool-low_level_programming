ARGC AND ARGV

- How to use arguments passed to your program ?
I can access arguments passed into a program using the "argv" and "argc" parameters in the "main()" function.
"argc" stands for "argument count" and it's an integer variable that represents the number of arguments passed to a
program when it's executed.The value of "argc" includes the name of the executable file itself as the first argument
followed by any additional arguments passed to the program
"argv" stands for "argument vector" and it's a parameter of type "char * []" (array of pointers to characters) that
represents an array of strings passed as arguments to a program when it's executed. It's used as a parameter in the
"main()" function. The "argv" array contains null-terminated strings representing each argument passed to the program. Thefirst element of the array, "argv[0]", represents the name of the executable file itself. The last element of the `argv 
array is always a null pointer, indicating the end of the argument list.

- What are two prototypes of main that you know of, and in which case do you use one or the other
- How to use __attribute_((unused)) or (void) to compile functions with unused variables or parameters


