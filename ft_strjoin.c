/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:07:56 by smarquez          #+#    #+#             */
/*   Updated: 2024/09/23 16:44:06 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	if ((s1 == NULL || s2 == NULL) )
		return(NULL);

	size_t s1_len;
	size_t s2_len;

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	
	joined= (char*)malloc((s1_len + s2_len + 1) * sizeof (char));
	
	if (joined == NULL)
		return(NULL);
	i = 0;
	while (i < s1_len)
	{
		joined[i] = s1[i];
		i++;
	}

	j = 0;

	while (j < s2_len)
	{
		joined[i + j] = s2[j];
		j++;
	}

	joined[i + j] = '\0';

	return (joined);
}
