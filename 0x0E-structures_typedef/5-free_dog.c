#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function.
 * @d: pointer.
 * Return: Always 0.
 */
void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}
