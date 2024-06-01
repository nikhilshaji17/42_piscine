#include <stdio.h>
#include <string.h>

int	ft_strcspn(const char *s, const char *reject)
{
	int ascii_one[256] = {0};
	int ascii_two[256] = {0};

	int i;
	int c;

	i = 0;
	while (s[i] != '\0')
	{
		c = s[i];
		ascii_one[c] += 1;
		i = i + 1;
	}

	i = 0;
	while (reject[i] != '\0')
	{
		c = reject[i];
		ascii_two[c] += 1;
		i = i + 1;
	}

	i = 0;
	while (s[i] != '\0')
	{
		c = s[i];
		if (ascii_one[c] >= 1 && ascii_two[c] == 0)
		{			
			printf("\n");
		}
		else
			return i;
		i = i + 1;
	}
	return i;
}

int main(void)
{
	char *s1 = "geeksforgeeks";
	char *s2 = "eeeee";
	printf("%lu \n", strcspn(s1, s2));
	printf("%i \n", ft_strcspn(s1, s2));
}