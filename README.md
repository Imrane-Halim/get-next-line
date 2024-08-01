# Get Next Line 📚🔍

## Description

Get Next Line is a C function that reads a line from a file descriptor. This project is part of the 1337 school curriculum and aims to enhance understanding of static variables, file descriptors, and memory management in C.

## Features ✨

- Reads a line from a given file descriptor
- Works with files and standard input
- Handles multiple file descriptors
- Memory efficient

## How to Use 🛠️

1. Clone the repository:
   ```
   git clone https://github.com/your-username/get_next_line.git
   ```

2. Include the header in your C file:
   ```c
   #include "get_next_line.h"
   ```

3. Compile your project with the source files and the chosen buffer size:
   ```
   cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 your_program.c get_next_line.c get_next_line_utils.c
   ```

4. Use the function in your code:
   ```c
   int fd = open("example.txt", O_RDONLY);
   char *line;

   while ((line = get_next_line(fd)) != NULL)
   {
       printf("%s", line);
       free(line);
   }
   close(fd);
   ```

## Function Prototype 📝

```c
char *get_next_line(int fd);
```

- `fd`: The file descriptor to read from
- Returns: A line read from the file descriptor, or NULL if there's nothing else to read or an error occurred

## Notes 📌

- The returned line includes the terminating `\n` character, except if the end of file was reached and does not end with a `\n` character.
- The function works both with files and when reading from the standard input.
- Proper memory management is crucial when using this function. Always remember to free the returned line when you're done with it.


Happy coding! 💻🚀
