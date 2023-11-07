#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i, j, k, l;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		;
	i++;
	new_dog->name = malloc(i * sizeof(char));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (j = 0; owner[j] != '\0'; j++)
		;
	j++;
	new_dog->owner = malloc(j * sizeof(char));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		new_dog->name[k] = name[k];
	new_dog->age = age;
	for (l = 0; l < j; l++)
		new_dog->owner[l] = owner[l];
	return (new_dog);
}
