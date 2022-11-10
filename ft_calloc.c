/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgouiame <cgouiame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:17:52 by cgouiame          #+#    #+#             */
/*   Updated: 2022/11/06 18:18:44 by cgouiame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc( size_t count, size_t size )
{
	void	*p;

	p = malloc(count * size);
	if (!p)
		return (NULL);
	ft_bzero (p, count * size);
	return (p);
}
