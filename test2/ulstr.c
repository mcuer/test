/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcuer <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/25 12:14:59 by mcuer             #+#    #+#             */
/*   Updated: 2015/08/28 17:22:58 by mcuer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1 ,&c ,1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			ft_putchar(str[i] - 32);
		}
		if (str[i] >= 65 && str[i] <= 90)
		{
			ft_putchar(str[i] + 32);
		}
		i++;
	}
}

int		main(int argc,char **argv)
{
	if (argc < 1 )
	{
		ft_putchar('\n');
		return (-1);
	}
	ft_putstr(argv[1]);
	return (0);
}
