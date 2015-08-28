/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcuer <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 19:40:30 by mcuer             #+#    #+#             */
/*   Updated: 2015/08/28 09:41:01 by mcuer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int i;
	int rslt;
	int temp;

	temp = 0;
	i = 0;
	rslt = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9') || str[i] == '-')
		{
			if (str[i] == '-')
				ft_putchar('-');
			else
				rslt = rslt * 10 + (str[i] - 48);
			i++;
		}
		else
			return (rslt);
	}
	return (rslt);
}
int		do_op(char *str, char *str2, char *str3)
{
	int result;
	int one;
	int three;

	result = 0;
	one = ft_atoi(str);
	three = ft_atoi(str3);

	if (str2[0] == '*')
	{
		result = one * three;
	}
	else if (str2[0] == '+')
	{
		result = one + three;
	}
	else if (str2[0] == '-')
	{
		result = one - three;
	}
	printf("%d",result);
	return (result);
}

int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		return (-1);
	}
	else
	{
		do_op(argv[1],argv[2],argv[3]);
	}
	return (0);
}
