#ifndef MAIN_H
#define MAIN_H

/*
 * FIle: function_pointers.h
 * Auth: Abdulsamad
 * Desc: Header file containing prototypr for all functions used in thr
 *	0x0F-function_pointers directory
 */

#include <stdlib.h>

int _putchar(char);

void print_name(char *name, void (*f)(char *));

void array_iterator(int *array, size_t size, void (*action)(int));

int int_index(int *array, int size, int (*cmp)(int));

#endif
