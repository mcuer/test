/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcuer <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/26 17:31:53 by mcuer             #+#    #+#             */
/*   Updated: 2015/08/26 20:46:47 by mcuer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	nbmax(int *tab, int taille)
{
	int i;
	int max;

	i = 0;
	max = 0;
	while(i < taille)
	{
		if (tab[i] > max)
		{
			max = tab[i];
		}
		i++;
	}
	printf("%d\n", max);
}

int		main(void)
{
	int tab[5] = {1,2,3,4,5};
	nbmax(tab, 5);
	return (0);
}

