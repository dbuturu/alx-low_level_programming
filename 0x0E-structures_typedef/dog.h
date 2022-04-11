#ifndef _dog_h_
#define _dog_h_

/**
 * struct dog - Define a new type struct dog.
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* _dog_h_ */

