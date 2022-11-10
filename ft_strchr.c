/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgouiame <cgouiame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:18:18 by cgouiame          #+#    #+#             */
/*   Updated: 2022/11/09 20:21:11 by cgouiame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr( const char *str, int c )
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str [i] == (char)c)
			return ((char *) &str[i]);
		i++;
	}
	if ((char)c == 0)
		return ((char *) &str[i]);
	return (0);
}
