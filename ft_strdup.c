/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:46:13 by smarquez          #+#    #+#             */
/*   Updated: 2024/09/23 13:14:51 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strdup(const char *s)
{
	size_t i;
	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);

	char *dup = (char *) malloc((i + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);

	i = 0;

	while (s[i] != '\0')
	{
		dup[i] = s[i];
		i++;
	}	
	dup[i] = '\0';
	return	(dup);
}