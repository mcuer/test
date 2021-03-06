/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcuer <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/26 20:46:56 by mcuer             #+#    #+#             */
/*   Updated: 2015/08/28 12:15:46 by mcuer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int 	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	last_word(char *str)
{
	int i;
	int lent;
	
	i = 0;
	lent = ft_strlen(str);
	while (i <= lent)
	{
		i++;
	}
	while (str[i] != ' ')
	{
		i--;
	}
	while (i >= 0 && i <= (lent - 1))
	{
		i++;
		ft_putchar(str[i]);
	}
}	

int		main(int argc, char **argv)
{
	if (argc < 2)
		return (-1);
	else
		last_word(argv[1]);
	return (0);
}
