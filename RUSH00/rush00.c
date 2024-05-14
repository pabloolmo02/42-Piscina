/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebravo- <jebravo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 12:25:21 by jebravo-          #+#    #+#             */
/*   Updated: 2024/01/28 14:20:43 by jebravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char n);

void	top_bottom(int x)
{
	int	counter;

	counter = 0;
	while (counter < x)
	{
		if (counter == 0 || counter == x - 1)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
		counter++;
	}
}

void	middle(int x)
{
	int	counter;

	counter = 0;
	while (counter < x)
	{
		if (counter == 0 || counter == x - 1)
		{
			ft_putchar('|');
		}
		else
		{
			ft_putchar(' ');
		}
		counter++;
	}
}

void	rush(int x, int y)
{
	int	counter;

	counter = 0;
	while (counter < y)
	{
		if (counter == 0)
		{
			top_bottom(x);
		}
		else if (counter == y - 1)
		{
			top_bottom(x);
		}
		else
		{
			middle(x);
		}
		ft_putchar('\n');
		counter++;
	}
}
