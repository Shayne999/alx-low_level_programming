
/**
 * _memcpy - function copies memory area
 * @dest: memory destination
 * @src: memory source
 * @n: number of bytes in memory area
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
