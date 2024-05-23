#include <stdio.h>
#include <string.h>

int ft_strspn(const char *s, const char *accept)
{
	int ascii_one[256] = {0};
	int ascii_two[256] = {0};
	int i;
	int character;

	i = 0;
	while(s[i] != '\0')
	{
		character = s[i];
		ascii_one[character] += 1;
		i = i + 1;
	}

	i = 0;
	while(accept[i] != '\0')
	{
		character = accept[i];
		ascii_two[character] += 1;
		i = i + 1;
	}

	i = 0;
	while (s[i] != '\0')
	{
		character = s[i];
		if (ascii_one[character] >= 1 && ascii_two[character] >= 1)
			i = i + 1;
		else
			return i;
	}

	return i;
}

int main(void)
{
	char *s1 = "geeksforgeeks";
	char *s2 = "geeks";
	printf("%lu \n", strspn(s1, s2));
	printf("%i \n", ft_strspn(s1, s2));
}