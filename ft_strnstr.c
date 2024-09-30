/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:45:55 by smarquez          #+#    #+#             */
/*   Updated: 2024/09/30 11:15:00 by smarquez         ###   ########.fr       */
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

/*

int main()
{
	const char big[] = "Hello World";
	const char little[] = "wor";
	size_t len = 6;
	char *ptr;
	ptr = ft_strnstr(big, little, len);
	if (ptr != NULL)
		write(1, ptr, 5);
	else
		write(1, "Not found", 9);
	return (0);
}
*/