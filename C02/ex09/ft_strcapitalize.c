/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmo-lo <polmo-lo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 19:27:30 by polmo-lo          #+#    #+#             */
/*   Updated: 2024/02/11 20:21:13 by polmo-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] < 'A' || str[i - 1] > 'z')
				str[i] -= 32;
			if (str[i - 1] > 'Z' && str[i - 1] < 'a')
				str[i] -= 32;
			if (str[i - 1] >= '0' && str[i - 1] <= '9')
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*
int main()
{
	char str[] = "salut, comment Tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("Original: %s\n", str);
    printf("Capitalized: %s\n", ft_strcapitalize(str));
    return 0;
}*/
