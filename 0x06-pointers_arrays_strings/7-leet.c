/**
 * leet - Encodes a string into 1337
 * @s: Pointer to a string
 *
 * Return: Pointer to encoded string
 */
char *leet(char *s)
{
	int i;
	int j;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = numbers[j];
				break;
			}
		}
	}
	return (s);
}
