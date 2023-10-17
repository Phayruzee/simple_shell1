#include <stdio.h>

/**
 * main - A function that appreciate a user
 *
 * return: 0 for successful excecution
 */
int main(void)
{
	char Person[50];

	printf("Enter your name: \n");
	scanf("%30s, Person");

	printf("Thank you, %s!\n", Person);

	return (0);
}
