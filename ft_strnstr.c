/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgouiame <cgouiame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:45:31 by cgouiame          #+#    #+#             */
/*   Updated: 2022/11/07 12:44:00 by cgouiame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (s2[0] == 0)
		return ((char *) s1);
	if (len == 0)
		return (NULL);
	while (s1[i] && i < len)
	{
		j = 0;
		while (s1[i + j] == s2[j] && s2[j] && i + j < len)
		{
			j++;
		}
		if (j == ft_strlen(s2))
			return ((char *)(s1 + i));
		i++;
	}
	return (0);
}
