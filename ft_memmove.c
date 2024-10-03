/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:20:10 by smarquez          #+#    #+#             */
/*   Updated: 2024/10/03 15:48:35 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d == s)
		return (dest);
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else if (d > s)
	{
		d += n;
		s += n;
		while (n--)
			*(--d) = *(--s);
	}
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "Hello World";
	char	dest[11];
	char	*ptr;

	ptr = ft_memmove(dest, src, 11);
	if (ptr != NULL)
		printf("Copied string: %s\n", dest);
	else
		printf("Error copying string\n");
	return (0);
}
*/