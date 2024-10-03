/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:49:51 by smarquez          #+#    #+#             */
/*   Updated: 2024/10/03 15:48:23 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n)
	{
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}

/*
#include <stdio.h>
int main()
{
	const char s1[] = "Hello world";
	const char s2[] = "Hello word";
	size_t i = 16;
	int restult;
	restult = ft_strncmp(s1, s2, i);
	printf("%d", restult);
	return (0);
}
*/