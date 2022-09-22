/**
 * _strncat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 * @n: number of bytes from src
 *
 * Return: new string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';

	return (dest);
}
