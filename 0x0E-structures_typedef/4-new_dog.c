#include <stdio.h>
#include "dog.h"
/**
 * new_dog-function to create a new structure
 *
 * @name:'String variable'
 * @age:'float variable'
 * @owner:'String variable'
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
