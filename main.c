#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char first[255], last[255];

	printf("Enter your first name: ");
	fgets(first, 255, stdin);
	first[strlen(first)-1] = '\0'; /* remove the newline at the end */

<<<<<<< HEAD

	printf("Hello %s %s!\n", first, last);
	return 0;

>>>>>>> 04f6387d1378b86692d73eec1fd15e5b21754866
}