#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int ascii_one[256] = {0};
	int ascii_two[256] = {0};
	int i;
	int character;

	i = 0;
	while (s1[i] != '\0')
	{
		character = s1[i];
		ascii_one[character] += 1;
		i = i + 1;
	}

	i = 0;
	while (s2[i] != '\0')
	{
		character = s2[i];
		ascii_two[character] += 1;
		i = i + 1;
	}

	i = 0;
	while(s1[i] != '\0')
	{
		character = s1[i];
		if (ascii_one[character] >= 1 && ascii_two[character] >= 1)
			return (char *)&s1[i];
		i++;
	}

	return (NULL);
}

#include <stdio.h>

int main(void)
{
	char s1[] = "Hellp my name is";
	char s2[] = "oxzp";
	printf("%s \n", strpbrk(s1,s2));
	// printf("%s \n", ft_strpbrk(s1,s2));
}