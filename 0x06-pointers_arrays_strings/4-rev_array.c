/**
 * reverse_array - Reverses array
 * @a: Pointer to an array of integers
 * @n: Number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;
	--n;
	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - i];
		a[n - i] = temp;
		i++;
	}
}
