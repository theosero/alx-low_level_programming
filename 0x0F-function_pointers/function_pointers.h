#ifndef FUNCTION_POINTERS_H
#definei FUNCTION_POINTERS_H

int _putchar(char);
void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));

#endif
