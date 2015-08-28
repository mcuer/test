/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcuer <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/25 14:24:30 by mcuer             #+#    #+#             */
/*   Updated: 2015/08/28 16:44:39 by mcuer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		j = 0;
		while (j != i)
		{
			ft_putchar(str[i]);
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_putchar('\n');
		return (-1);
	}
	ft_putstr(argv[1]);
}
