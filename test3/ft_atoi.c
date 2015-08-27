/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcuer <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 15:46:49 by mcuer             #+#    #+#             */
/*   Updated: 2015/08/27 19:52:20 by mcuer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_atoi(char *str)
{
	int i;
	int rslt;
	int temp;

	temp = 0;
	i = 0;
	rslt = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9') || str[i] == '-' )
		{
			if (str[i] == '-')
				ft_putchar('-');
			else
				printf("%d\n%d\n", str[i],rslt);
				rslt = rslt * 10 + (str[i] - 48);
			i++;
		}
		else
			return (rslt);
	}
	return (rslt);
}

int main(int argc, char **argv)
{
	if (argc < 2 )
		return (-1);
	else
		printf("%d\n", ft_atoi(argv[1]));
	return (0);
}
