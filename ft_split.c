/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 10:03:27 by smarquez          #+#    #+#             */
/*   Updated: 2024/10/03 13:09:18 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free(char **result, size_t fail_pos)
{
	size_t		i;

	if (fail_pos > 0)
	{
		i = fail_pos - 1;
		while (i > 0)
		{
			free (result[i--]);
		}
		free(result[0]);
	}
	free(result);
	return (NULL);
}

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

	if (!s)
		return (NULL);
	i = 0;
	words = count_words(s, c);
	result = malloc((words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (*s && i < words)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			result[i++] = get_next_word(s, c);
			if (!result [i - 1])
				return (ft_free(result, i - 1));
		}
		while (*s && *s != c)
			s++;
	}
	return (result[i] = NULL, result);
}
/*
#include <stdio.h>
int	main(void)
{
	const char *s;
	s = "Hola Mudo que tal";
	char c;
	c = ' ';
	char	**result;
	int i;
	i = 0;

	result = ft_split(s, c);
	while (result[i] != NULL)
	{
		printf("%s \n", result[i]);
		i++;
	}
	return (0);
}
*/