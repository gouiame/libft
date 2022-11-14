/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgouiame <cgouiame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:36:53 by cgouiame          #+#    #+#             */
/*   Updated: 2022/11/14 17:19:35 by cgouiame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	ch;
	unsigned char	*str1;
	size_t			i;

	str1 = (unsigned char *) str;
	ch = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		str1 [i] = ch;
		i++;
	}
	return (str);
}
