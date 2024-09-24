/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:47:27 by smarquez          #+#    #+#             */
/*   Updated: 2024/09/24 11:10:51 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	if (s1 == NULL || set == NULL)
		return (NULL);
		size_t s1_len;
		size_t set_len;

	s1_len = ft_strlen(s1);
	set_len = ft_strlen(set);

		size_t start;
		start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
	{
		start++;
	}

	size_t end;
	end = ft_strlen(s1) - 1;
	while (end < start && ft_strchr(set, s1[end]))
	{
		end--;
	}

	size_t new_lenght;
	new_lenght = end - start + 1;

	char *trimmed_str = malloc((new_length + 1) * sizeof(char));
	if (trimmed_str == NULL)
		return (NULL);

	while (i < new_length)
	{
		trimmed_str[i] = s1[start + i];
		i++;
	}
		trimmed_str[new_length] = '\0';
		return (trimmed_str);
}
