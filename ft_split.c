/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgouiame <cgouiame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 13:57:30 by cgouiame          #+#    #+#             */
/*   Updated: 2022/11/08 21:44:16 by cgouiame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	**free_memory(char **p)
{
	size_t	n;

	n = 0;
	while (p[n] != '\0')
	{
		free(p[n]);
		n++;
	}
	free (p);
	return (0);
}

static size_t	words_counter(char const *str, char c)
{
	size_t	counter;
	int		i;

	i = 0;
	counter = 0;
	while (str[i] == c)
		i++;
	while (str[i] != '\0')
	{
		if (str[i + 1] == '\0' || (str[i] == c && str[i + 1] != c))
			counter++;
		i++;
	}
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**split;
	size_t	j;
	size_t	wordstart;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	split = (char **) malloc ((words_counter(s, c) + 1) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	while (i < words_counter(s, c) && s[j] != '\0')
	{
		while (s[j] == c)
			j++;
		wordstart = j;
		while (s[j] != c && s[j] != '\0')
			j++;
		split[i] = ft_substr(s, wordstart, j - wordstart);
		if (split[i++] == NULL)
			return (free_memory(split));
	}
	split[i] = NULL;
	return (split);
}

// int main()
// {
// 	char **tab;
// 	int i;
// 	tab = ft_split("     hello 1337 khouribga benguerir  !", ' ');
// 	i = 0;
// 	while (i < 6)
// 	{
// 		printf ("tab[%d] = %s\n", i,tab[i]);
// 		i++;
// 	}
// }