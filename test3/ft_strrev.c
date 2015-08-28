/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcuer <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 21:21:10 by mcuer             #+#    #+#             */
/*   Updated: 2015/08/28 09:52:40 by mcuer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	char	tmp;
	if (str)
	{
		i = 0;
		len = ft_strlen(str);
		while (i < len / 2)
		{
			tmp = str[i];
			str[i] = str[len - i -1];
			str[len - i - 1] = tmp;
			i++;
		}
	}
	return (str);
}

int		main(void)
{
		char	str[7] = "helloa\0";
		ft_putstr(str);
		ft_putchar('\n');
		ft_strrev(str);
		ft_putstr(str);
		ft_putchar('\n');

		return (0);
}
