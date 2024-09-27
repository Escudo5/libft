/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:45:55 by smarquez          #+#    #+#             */
/*   Updated: 2024/09/27 15:17:59 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (*little == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	i = 0;
	while (i != '\0')
	{
		while (little[i] && big[i] == little[i] && i < len)
		{
			i++;
		}
		if (little[i] == '\0' && i <= len)
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
