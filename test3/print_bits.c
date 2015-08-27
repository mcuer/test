/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcuer <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 11:46:47 by mcuer             #+#    #+#             */
/*   Updated: 2015/08/27 16:34:07 by mcuer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

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

int		main(int argc , char **argv)
{
	if (argc == 2)
		print_bits(atoi(argv[1]));
	write(1,"\n", 1);
	return (0);
}
