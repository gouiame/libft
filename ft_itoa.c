/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgouiame <cgouiame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:54:40 by cgouiame          #+#    #+#             */
/*   Updated: 2022/11/09 20:17:52 by cgouiame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(long c)
{
	int	i;

	i = 0;
	if (c <= 0)
	{
		c = c * (-1);
		i++;
	}
	while (c > 0)
	{
		c = c / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nb;

	nb = n;
	len = ft_intlen(nb);
	if (nb == 0)
		return (ft_strdup("0"));
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * (-1);
	}
	str[len--] = '\0';
	while (nb > 0)
	{
		str[len] = (nb % 10) + '0';
		nb = nb / 10;
		len--;
	}
	return (str);
}
