/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:35:58 by smarquez          #+#    #+#             */
/*   Updated: 2024/09/27 14:46:32 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>

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
