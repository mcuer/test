/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcuer <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/28 21:21:25 by mcuer             #+#    #+#             */
/*   Updated: 2015/08/28 21:29:19 by mcuer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		main(int argc, char **argv)
{
	if (argc < 1)
	{
		return (-1);
	}
	else
	{
		int i;
		i = 1;
		while (i > 0  && i <= 3)
		{
			printf("%d\n", ft_strlen(argv[i]));
			i++;
		}
		return (0);
	}
}
