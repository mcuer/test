/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcuer <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/25 15:07:14 by mcuer             #+#    #+#             */
/*   Updated: 2015/08/27 15:47:53 by mcuer            ###   ########.fr       */
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

	i = 0;
	while (str[i])
	{
		if ((str[i] >='n'  && str[i] <='z' ) 
				|| (str[i] >= 'N' && str[i] <= 'Z'))
		{
			ft_putchar(str[i] - 13);
		}
		else if ((str[i] >= 'a' && str[i] <= 'm')
		|| (str[i] >= 'A' && str[i] <= 'M'))
		{
			ft_putchar(str[i] + 13);
		}
		else
		{
			ft_putchar(str[i]);
		}	
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_putchar('\n');
		return (-1);
	}
	ft_putstr(argv[1]);
	return (0);
}		
