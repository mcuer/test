/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcuer <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/24 12:31:31 by mcuer             #+#    #+#             */
/*   Updated: 2015/08/24 14:08:14 by mcuer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> 

int		ft_putchar(char c)
{
	write(1, &c ,1);
	return (0);
}

void	ft_print_number(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
	 	ft_putchar(i);
		i++;
	}
	ft_putchar('\n');
}

int	main(void)
{
	ft_print_number();
	return (0);
}
