#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Short description
 * @name: char type
 * @age: float type
 * @owner: char type
 *
 * Description: Longer description
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
