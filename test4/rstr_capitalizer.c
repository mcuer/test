/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcuer <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/28 15:24:23 by mcuer             #+#    #+#             */
/*   Updated: 2015/08/28 21:21:17 by mcuer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1 , &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
void	rstr_capitalizer(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i + 1] == ' ' || str[i + 1] == '\0')
		{	
			if (str[i] >= 97 && str[i] <= 122)
				ft_putchar(str[i] - 32);	
			else
				ft_putchar(str[i]);	
		}
		else if (str[i] >= 65 && str[i] <= 90)
				ft_putchar(str[i] + 32);	
		else
			ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		return (-1);
		ft_putchar('\n');
	}
	else
		rstr_capitalizer(argv[1]);	
	return (0);
}
