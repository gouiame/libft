/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgouiame <cgouiame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 20:32:30 by cgouiame          #+#    #+#             */
/*   Updated: 2022/11/07 12:43:09 by cgouiame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	size_dst;
	size_t	size_src;
	size_t	i;

	i = 0;
	size_src = ft_strlen(src);
	if (size == 0)
		return (size_src);
	size_dst = ft_strlen(dst);
	if (size <= size_dst)
		return (size + size_src);
	while ((i + size_dst) < (size - 1) && src[i])
	{
		dst[size_dst + i] = src[i];
		i++;
	}
	dst[size_dst + i] = '\0';
	return (size_src + size_dst);
}
