#ifndef DOG_STR
#define DOG_STR
/**
 * struct dog - a new prototype of dog object
 * @name: string name.
 * @age: float - name.
 * @owner: string.
 * Return: Always 0.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
int _putchar(char c);

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
