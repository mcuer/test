/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcuer <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/26 21:11:48 by mcuer             #+#    #+#             */
/*   Updated: 2015/08/26 22:16:35 by mcuer            ###   ########.fr       */
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
	int value;

	i = 0;
	value = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			value = str[i] - 97;
			str[i] = 122 - value;	
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			value = str[i] - 65;
			str[i] = 90 - value;
		}
		ft_putchar(str[i]);	
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc,char ** argv)
{
	if (argc < 2)
	{
		ft_putchar('\n');
		return (-1);
	}
	else
		ft_putstr(argv[1]);
	return (0);
}
