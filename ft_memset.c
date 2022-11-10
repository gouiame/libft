/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgouiame <cgouiame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:36:53 by cgouiame          #+#    #+#             */
/*   Updated: 2022/11/09 18:07:26 by cgouiame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	ch;
	char			*str1;
	size_t			i;

	str1 = (char *) str;
	ch = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		str1 [i] = ch;
		i++;
	}
	return (str);
}
