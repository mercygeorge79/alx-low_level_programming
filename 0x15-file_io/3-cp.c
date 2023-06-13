#include "main.h"

/**
* error_exit - Prints an error message and exits with a specific status code
* @code: Status code to exit with
* @message: Error message to print
*/
void error_exit(int code, const char *message)
{
dprintf(STDERR_FILENO, "%s\n", message);
exit(code);
}

/**
* cp_file - Copies the content of one file to another
* @file_from: Source file name
* @file_to: Destination file name
*/
void cp_file(const char *file_from, const char *file_to)
{
int fd_from, fd_to, bytes_read, bytes_written;
char buffer[1024];

fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
error_exit(98, "Error: Can't read from file");

fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
if (fd_to == -1)
{
close(fd_from);
error_exit(99, "Error: Can't write to file");
}

while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
close(fd_from);
close(fd_to);
error_exit(99, "Error: Can't write to file");
}
}

if (bytes_read == -1)
{
close(fd_from);
close(fd_to);
error_exit(98, "Error: Can't read from file");
}

if (close(fd_from) == -1 || close(fd_to) == -1)
error_exit(100, "Error: Can't close fd");
}

/**
* main - Entry point
* @argc: Argument count
* @argv: Argument vector
*
* Return: 0 on success
*/
int main(int argc, char **argv)
{
if (argc != 3)
error_exit(97, "Usage: cp file_from file_to");

cp_file(argv[1], argv[2]);

return (0);
}

