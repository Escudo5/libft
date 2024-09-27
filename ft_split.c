/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:43:12 by smarquez          #+#    #+#             */
/*   Updated: 2024/09/27 15:01:13 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	word_count;
	char	**result;
	size_t	start;
	size_t	end;
	size_t	word_index;

	i = 0;
	word_count = 0;
	while (s[i] != '\0')
	{
		if (i == 0 && s[i] != c)
			word_count++;
		if (i > 0 && s[i] != c && s[i - 1] == c)
			word_count++;
		i++;
	}
	result = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	word_index = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] != c && s[i] != '\0')
			{
				i++;
			}
			end = i;
			result[word_index] = (char *)malloc((end - start + 1)
					* sizeof(char));
			if (!result[word_index])
			{
				while (word_index > 0)
				{
					free(result[--word_index]);
				}
				free(result);
				return (NULL);
			}
			ft_strlcpy(result[word_index], &s[start], end - start + 1);
			word_index++;
		}
		else
		{
			i++;
		}
	}
	result[word_index] = NULL;
	return (result);
}
/*
int	main(void)
{
	char *s = "Hola, como estas?";
	char **result = ft_split(s, ' ');
	int i = 0;
	while (result[i] != NULL)
	{
		printf("%s\n", result[i]);
		i++;
	}
	return (0);
}
*/