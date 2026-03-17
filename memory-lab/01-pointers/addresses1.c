// Prints an integer's address
// The & operator gives you the memory address of a variable.
// %p is the format specifier for printing addresses (pointers).

#include <stdio.h>

int main(void)
{
    int n = 50;

    // Print the address of n
    printf("%p\n", (void*)&n);
}