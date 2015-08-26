/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcuer <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/24 13:48:36 by mcuer             #+#    #+#             */
/*   Updated: 2015/08/24 13:55:11 by mcuer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_countdown(void)
{
	int i;

	i = '9';
	while ( i >= '0')
	{
		ft_putchar(i);
		i--;
	}
	ft_putchar('\n');
}

int		main(void)
{
	ft_countdown();
	return (0);
}
