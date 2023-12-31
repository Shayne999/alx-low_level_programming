#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

#define BUF_SIZE 1024

int _putchar(char c);

ssize_t read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *text_content);

int append_text_to_file(const char *filename, char *text_content);

void error_98(int file_zero, char *buff, char *argv);

void error_99(int file_zero, char *buff, char *argv);

void error_100(int file_zero, char *buff);

int main(int argc, char **argv);

#endif
