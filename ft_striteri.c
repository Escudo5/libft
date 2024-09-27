/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:28:00 by smarquez          #+#    #+#             */
/*   Updated: 2024/09/27 15:07:41 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	s_len;
	size_t	i;

	if (s == NULL || f == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
