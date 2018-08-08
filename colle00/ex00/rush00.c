#include <unistd.h>

void	ft_putchar(char c);

void	ft_horizontal_line(int x)
{
	int i;

	i = 1;
	ft_putchar('o');
	while (i < x - 1)
	{
		ft_putchar('-');
		i++;
	}
	ft_putchar('o');
	ft_putchar('\n');
}

void	ft_middle_line(int x)
{
	int i;

	i = 0;
	ft_putchar('|');
	while (i < x - 2)
	{
		ft_putchar(' ');
		i++;
	}
	ft_putchar('|');
	ft_putchar('\n');
}

void	ft_vertical_line(int y)
{
	int i;

	i = 0;
	ft_putchar('o');
	ft_putchar('\n');
	while (i < y - 2)
	{
		ft_putchar('|');
		ft_putchar('\n');
		i++;
	}
	ft_putchar('o');
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
			ft_putchar('o');
			ft_putchar('\n');
		}
		if (y == 1 && x != 1)
			ft_horizontal_line(x);
		if (x == 1 && y != 1)
			ft_vertical_line(y);
		if (x > 1 && y > 1)
		{
			ft_horizontal_line(x);
			while (++i <= y - 2)
				ft_middle_line(x);
			ft_horizontal_line(x);
		}
	}
	return (0);
}
