#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

int _putchar(char);

/* 0x15 prototypes */
ssize_t read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *text_content);

#endif /* HOLBERTON_H */
