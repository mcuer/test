/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcuer <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 09:21:45 by mcuer             #+#    #+#             */
/*   Updated: 2015/08/27 11:24:02 by mcuer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	unionx(char *str, char *str2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while(str2[j] != '\0')
		{
			j++;
		}
		if (str[i] == str2[i])
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putchar('\n');
		return (-1);
	}
	else
		unionx(argv[1],argv[2]);
	return (0);
}
