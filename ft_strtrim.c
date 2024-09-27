/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:47:27 by smarquez          #+#    #+#             */
/*   Updated: 2024/09/27 15:20:47 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_len;
	size_t	set_len;
	size_t	start;
	size_t	end;
	size_t	new_length;
	size_t	i;
	char	*trimmed_str;

	if (s1 == NULL || set == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	set_len = ft_strlen(set);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
	{
		start++;
	}
	end = ft_strlen(s1) - 1;
	while (end < start && ft_strchr(set, s1[end]))
	{
		end--;
	}
	new_length = end - start + 1;
	i = 0;
	trimmed_str = malloc((new_length + 1) * sizeof(char));
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
