/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcuer <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 14:45:58 by mcuer             #+#    #+#             */
/*   Updated: 2015/08/28 16:01:36 by mcuer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	expand_str(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{	
		if (str[i] == ' ')
		{
			j++;	
		}
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
	expand_str(argv[1]);
	return (0);
}

