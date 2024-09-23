# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
#                                                     +:+ +:+         +:+      #
#    By: smarquez <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/18 15:24:41 by smarquez          #+#    #+#              #
#    Updated: 2024/09/18 15:43:27 by smarquez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#include <stddef.h>

char	*ft_strrchr(cosnt char *s, int c)
{
	char	*last_occurrence;
	last_occurrence = NULL;	
	while (*s != '\0')
	{
		if (*s == (char)c)
			last_occurrence = (char *)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (last_occurrence);
}
