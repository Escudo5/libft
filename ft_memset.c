/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:59:07 by smarquez          #+#    #+#             */
/*   Updated: 2024/09/27 14:54:14 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*
int	main(void)
{
	char	s1[] = "hhyuuyvkyvk";
	int		c1;
	size_t	n1;

	c1 = 77;
	n1 = 6;
	ft_memset(s1, c1, n1);
	printf("%s", s1);
	return (0);
}
*/