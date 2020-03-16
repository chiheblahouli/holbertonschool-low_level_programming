#include <stdio.h>
#include "dog.h"
/**
 *print_dog - print the structure of the dog
 *@d: pointer.
 *Return: Always 0.
 */

void print_dog(struct dog *d)
{

		if (d == NULL)
			return;
		if (d->name == NULL)
			printf("Name: (nil)\n");
	else
			printf("Age: %.6f\n", d->age);
			printf("Name: %s\n", d->name);

		if (d->owner == NULL)
			printf("Owner: (nil)\n");
	else
			printf("Owner: %s\n", d->owner);
}