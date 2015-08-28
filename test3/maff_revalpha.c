/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcuer <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 22:41:08 by mcuer             #+#    #+#             */
/*   Updated: 2015/08/28 10:01:25 by mcuer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	maff_revalpha(void)
{
	int i;

	i = 'z';
	while ( i >= 'a')
	{
		ft_putchar(i);
		i--;
	}
}

int		main(void)
{
	maff_revalpha();
	return (0);
}
