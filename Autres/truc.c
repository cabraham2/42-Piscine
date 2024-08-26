#include <stdio.h>
#include <stdlib.h>


typedef struct {
	int	cent;
	int	dizaine;
	int	digit;
} NumberParts;

NumberParts	bignb(int nb)
{
	NumberParts	parts = {0, 0, 0};

	if (nb <= 1000)
	{
		if (nb >= 100)
		{
			parts.cent = nb / 100;
			nb = nb % 100;
		}
		if (nb >= 10)
		{
			parts.dizaine = nb / 10;
			nb = nb % 10;
		}
		parts.digit = nb;
	}
	return (parts);
}

void	decompose(int nb)
{
	NumberParts parts = bignb(nb);

	if (parts.cent > 0)
	{
		printf("%d, 100, ", parts.cent);
	}
	if (parts.dizaine >= 2)
	{
		printf("%d", parts.dizaine * 10);
	}
	else if (parts.dizaine == 1)
	{
		printf("%d", parts.dizaine * 10 + parts.digit);
		parts.digit = 0;
	}
	if (parts.digit > 0)
	{
		printf(", %d", parts.digit);
	}
}

int	main(void)
{
	char	input[10];
	int		nb;

	printf("Entrer un nombre : ");
	scanf("%s", input);
	nb = atoi(input);
	decompose(nb);
	return (0);
}
