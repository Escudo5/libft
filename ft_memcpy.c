/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:54:13 by smarquez          #+#    #+#             */
/*   Updated: 2024/10/03 15:49:37 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*
int main()
{
	char	src[] = "Hello World";
	char	dest[11];
	char	*ptr;

	ptr = ft_memcpy(dest, src, 11);
	if (ptr != NULL)
		printf("Copied string: %s\n", dest);
	else
		printf("Error copying string\n");
	return (0);
}
*/