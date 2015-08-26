/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcuer <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/26 11:28:30 by mcuer             #+#    #+#             */
/*   Updated: 2015/08/26 13:11:08 by mcuer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c ,1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	*ft_strcpy(char *src, char *dest)
{
	int index;
	
	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	ft_putstr(dest);
	ft_putchar('\n');
	return (dest);
}

int	main(void)
{
	char s1[] = "hello";
	char s2[] = "te";
	ft_strcpy(s1,s2);
	return (0);
}
