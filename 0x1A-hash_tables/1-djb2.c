/**
 * hash_djb2 - hash using djb2 algorithm (hash function)
 * @str: string to be hashed
 * Return: hash
 * src: https://gist.github.com/papamuziko/7bb52dfbb859fdffc4bd0f95b76f71e8
 * gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-djb2.c -o b
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
