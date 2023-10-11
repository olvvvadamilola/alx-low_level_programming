#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - function that creates a new dog.
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	/*allocate memory using sizeof*/
	dog_t *new_dog = malloc(sizeof(dog_t));

	/*check if malloc successfully allocated memory*/
	if (new_dog == NULL)
		return (NULL);

	/**
     * allocates memory to store the entire name string(strlen), + '\0'
     * free memory obviously if NULL
	 */
	new_dog->name = malloc(strlen(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	/* copy string */
	strcpy(new_dog->name, name);

	new_dog->age = age;

	new_dog->owner = malloc(strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->owner, owner);

	return (new_dog);
}
