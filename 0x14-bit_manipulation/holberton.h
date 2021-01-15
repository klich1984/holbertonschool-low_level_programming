#ifndef __HOLBERTON__H
#define __HOLBERTON__H
#include <stdlib.h>
#include <stdio.h>
#define NULL ((void *)0)

int _putchar(char c);
unsigned int _strlen(const char *s);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif
