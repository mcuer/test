/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcuer <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/26 15:21:43 by mcuer             #+#    #+#             */
/*   Updated: 2015/08/27 22:27:55 by mcuer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	printf("%d", i);
	return (i);	
}

int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(1,"\n", 1);
		return (-1);
	}
	else
		ft_strlen(argv[1]);
}
