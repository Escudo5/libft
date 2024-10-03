/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:45:55 by smarquez          #+#    #+#             */
/*   Updated: 2024/10/03 15:48:23 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] && big[i + j] && (i + j) < len && big[i
				+ j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

/*

int	main(void)
{
	const char	big[] = "Hello World";
	const char	little[] = "wor";
	size_t		len;
	char		*ptr;

	len = 6;
	ptr = ft_strnstr(big, little, len);
	if (ptr != NULL)
		write(1, ptr, 5);
	else
		write(1, "Not found", 9);
	return (0);
}
*/