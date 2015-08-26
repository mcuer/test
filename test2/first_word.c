/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcuer <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/25 14:15:33 by mcuer             #+#    #+#             */
/*   Updated: 2015/08/26 11:39:36 by mcuer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
	{
		i++;
	}
	while (str[i] != ' ' && str[i] != '\n' &&
			str[i] != '\0' && str[i] != '\t')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc == 1 || argc > 2)
	{
		ft_putchar('\n');
		return (-1);
	}
	ft_putstr(argv[1]);
	return (0);
}
