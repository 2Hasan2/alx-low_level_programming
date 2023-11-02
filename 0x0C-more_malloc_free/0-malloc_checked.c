#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to allocate
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
    void *p;

    p = malloc(b);
    if (p == NULL)
        exit(98);
    return (p);
}

// test function
int main(){
    char *p;

    p = malloc_checked(1024);
    printf("%p\n", (void *)p);
    free(p);
    return (0);
}