/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:20:22 by smarquez          #+#    #+#             */
/*   Updated: 2024/09/26 12:02:38 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *p1;
	unsigned char *p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	size_t i = 0;

	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}
#include <stdio.h>

int main()
{
	char s1[] = "Avfd";
	char s2[] = "ABCD";
	int result;
	result = ft_memcmp(s1, s2, 3);
	printf("%d\n", result);
	return (0);
}