/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgouiame <cgouiame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 22:22:55 by cgouiame          #+#    #+#             */
/*   Updated: 2022/11/11 17:51:03 by cgouiame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;
	
	i = 0;
	if (str == NULL){
		
		return (0);
	}
	while (str[i])
		i++;
	return (i);
}


int main (){
	char *test = NULL;
	printf("%zu", ft_strlen(test));
}
