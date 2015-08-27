/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcuer <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 09:58:40 by mcuer             #+#    #+#             */
/*   Updated: 2015/08/27 14:33:17 by mcuer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_bits(unsigned char octet)
{
	int index;
	char number;
	char str[8];

	index = 7;
	while (index >= 0)
	{
		number = (octet % 2 + '0');
		str[index] = number;
		octet = octet / 2;
		index--;
	}
	write (1, str, 8);
}

char unsigned	reverse_bits(unsigned char octet)
{
	unsigned char	result;

	result = 0;
	if (octet % 2 >= 1)
		result = result + 128;
	if (octet % 4 >= 2)
		result = result + 64;
	if (octet % 8 >= 4)
		result = result + 32;
	if (octet % 16 >= 8)
		result = result + 16;
	if (octet % 32 >= 16)
		result = result + 8;
	if (octet % 64 >= 32)
		result = result + 4;
	if (octet % 128 >= 64)
		result = result + 2;
	print_bits(result);
	return (result);
}

int		main(void)
{	
	print_bits(130);
	ft_putchar('\n');
	reverse_bits(130);
	return (0);
}
