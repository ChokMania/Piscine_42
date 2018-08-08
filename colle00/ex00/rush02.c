#include <unistd.h>

void	ft_putchar(char c);

void	ft_first_line(int x)
{
	int i;

	i = 1;
	ft_putchar('A');
	while (i < x - 1)
	{
		ft_putchar('B');
		i++;
	}
	ft_putchar('A');
	ft_putchar('\n');
}

void	ft_last_line(int x)
{
	int i;

	i = 1;
	ft_putchar('C');
	while (i < x - 1)
	{
		ft_putchar('B');
		i++;
	}
	ft_putchar('C');
	ft_putchar('\n');
}

void	ft_middle_line(int x)
{
	int i;

	i = 0;
	ft_putchar('B');
	while (i < x - 2)
	{
		ft_putchar(' ');
		i++;
	}
	ft_putchar('B');
	ft_putchar('\n');
}

void	ft_vertical_line(int y)
{
	int i;

	i = 0;
	ft_putchar('A');
	ft_putchar('\n');
	while (i < y - 2)
	{
		ft_putchar('B');
		ft_putchar('\n');
		i++;
	}
	ft_putchar('C');
	ft_putchar('\n');
}

int		rush(int x, int y)
{
	int i;

	i = 0;
	if (x > 0 && y > 0)
	{
		if (x == 1 && y == 1)
		{
			ft_putchar('A');
			ft_putchar('\n');
		}
		if (y == 1 && x != 1)
			ft_first_line(x);
		if (x == 1 && y != 1)
			ft_vertical_line(y);
		if (x > 1 && y > 1)
		{
			ft_first_line(x);
			while (++i <= y - 2)
				ft_middle_line(x);
			ft_last_line(x);
		}
	}
	return (0);
}
