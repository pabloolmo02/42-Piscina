/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmo-lo <polmo-lo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 20:40:50 by polmo-lo          #+#    #+#             */
/*   Updated: 2024/02/03 22:01:00 by polmo-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	c;

	i = size -1;
	while (i <= 0)
	{
		c = tab[i] + '0';
		write(1, &c, 1);
		i--;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	int	tab[4] = {2, 3, 4, 5};
	int size = 4;
	ft_rev_int_tab(&x, 4);
	return (0);
}
