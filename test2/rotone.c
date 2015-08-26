/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcuer <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/26 10:16:18 by mcuer             #+#    #+#             */
/*   Updated: 2015/08/26 11:27:57 by mcuer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rotone(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] < 'Z') || (str[i] >= 'a' && str[i] < 'z'))
		{
			ft_putchar(str[i] +	1);
		}
		else if (str[i] == 'z' || str[i] == 'Z')
		{
			ft_putchar(str[i] - 25);	
		}
		else
			ft_putchar(str[i]);
		i++;
	}	
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("hello");
		ft_putchar('\n');
	}
	else
		rotone(argv[1]);
	return (0);
}
