#include <stdlib.h>

char    *ft_strdup(char *src)
{
	char *ptr;

	int i = 0;
	while (src[i] != '\0')
	{
		i = i + 1;
	}

	ptr = (char *)malloc((sizeof(char) * i) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	
	ptr[i] = '\0';
	i = 0;

	while(src[i] != '\0')
	{
		ptr[i] = src[i];
		i ++;
	}

	return (ptr);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	char *to_copy = "Hello";
	char *dest;

	dest = ft_strdup(to_copy);
	printf("%lu \n", strlen(dest));
	printf("%s \n", dest);	
}