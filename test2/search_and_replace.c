/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcuer <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/26 15:40:29 by mcuer             #+#    #+#             */
/*   Updated: 2015/08/26 16:57:37 by mcuer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write( 1, &c, 1);
}

void	search_and_replace(char *str,char *str1, char *str2)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == str1[0])
		{
			//printf("lettre identique");
			str[i] = str2[0];
		}
		ft_putchar(str[i]);
		i++;
	}	
}

int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putchar('\n');
		return (-1);
	}
	else
		search_and_replace(argv[1],argv[2],argv[3]);
	return (0);
}
