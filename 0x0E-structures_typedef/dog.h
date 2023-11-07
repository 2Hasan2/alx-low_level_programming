#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - struct for dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

/* function prototypes */



#endif
