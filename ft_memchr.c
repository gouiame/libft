/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgouiame <cgouiame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:20:20 by cgouiame          #+#    #+#             */
/*   Updated: 2022/11/08 18:55:46 by cgouiame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*str1;
	size_t			i;

	str1 = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (str1[i] == (unsigned char)c)
			return (&str1[i]);
		i++;
	}
	return (0);
}
