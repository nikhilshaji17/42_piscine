
void	ft_swap(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}

#include <stdio.h>

int main(void)
{
	int x = 10;
	int y = 9;
	ft_swap(&x, &y);
	printf("%i \n", x);
	printf("%i \n", y);
}