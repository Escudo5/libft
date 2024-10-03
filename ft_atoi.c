/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:09:06 by smarquez          #+#    #+#             */
/*   Updated: 2024/10/03 15:49:27 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	result;

	while (*nptr == ' ' || *nptr == '\t' || *nptr == '\n' || *nptr == '\v'
		|| *nptr == '\f' || *nptr == '\r')
		nptr++;
	sign = 1;
	if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	result = 0;
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	return (sign * result);
}

/*#include <stdio.h>

int	main(void)
{
	const char	s1[] = "  p      -86p75";
	int			result;

	result = ft_atoi(s1);
	printf("%d", result);
	return (0);
}
*/