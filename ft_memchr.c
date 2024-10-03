/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:35:58 by smarquez          #+#    #+#             */
/*   Updated: 2024/10/03 15:48:51 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	target;

	ptr = (unsigned char *)s;
	target = (unsigned char)c;
	while (n--)
	{
		if (*ptr == target)
			return (ptr);
		ptr++;
	}
	return (NULL);
}

/*
int	main()
{
	char	str[] = "Hello World";
	char	*ptr;

	ptr = ft_memchr(str, 'W', 11);
	if (ptr != NULL)
		printf("Character found: %c\n", *ptr);
	else
		printf("Character not found\n");
	return (0);
}
*/