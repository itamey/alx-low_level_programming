#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - dog data type
 * @name: Name of dog
 * @age: age of dog
 * @owner: name of dog's owner
 * Description: data type used to identify dog in a code
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef of struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner's name
 * Description: alias for typedef atruct dog
 */

typedef struct dog dog_t;

/* function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
