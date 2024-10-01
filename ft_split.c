/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 10:03:27 by smarquez          #+#    #+#             */
/*   Updated: 2024/10/01 17:21:19 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static size_t	count_words(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s && *s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static char	*get_next_word(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (ft_substr(s, 0, len));
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	words;
	char	**result;

	i = 0;
	words = count_words(s, c);
	result = malloc((words + 1) * sizeof(char *));
	if (!result || !s)
		return (NULL);
	while (*s && i < words)
	{
		while (*s == c && *s)
			s++;
		if (*s)
			result[i++] = get_next_word(s, c);
		while (*s && *s != c)
			s++;
	}
	result[i] = NULL;
	return (result);
}
/*
int	main(void)
{
	char	*s;
	char	**result;
	int		i;

	s = "Hola, como estas?";
	result = ft_split(s, ' ');
	i = 0;
	while (result[i] != NULL)
	{
		printf("%s\n", result[i]);
		i++;
	}
	return (0);
}
*/