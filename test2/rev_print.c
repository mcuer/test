/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcuer <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/26 13:11:14 by mcuer             #+#    #+#             */
/*   Updated: 2015/08/26 13:42:46 by mcuer            ###   ########.fr       */
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
	while (str[i] != '\0')
	{
		i++;
	}
	j = i;
	while ( j >= 0)
	{
		ft_putchar(str[j]);
		j--;
	}
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putchar('\n');
		return (-1);
	}
	else
		ft_putstr(argv[1]);
}
