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
struct dog
{
	char *name;
	char *owner;
	float age;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
