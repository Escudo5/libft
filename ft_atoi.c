/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:09:06 by smarquez          #+#    #+#             */
/*   Updated: 2024/09/26 12:21:33 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_atoi(const char *nptr)
{
	while (*nptr == ' ')
		nptr++;
	int sign;
	sign = 1;
	if (*nptr == '-')
	{	
		sign = -1;
		nptr++;
	}
	if (*nptr == '+')
	{	
		nptr++;
	}
	int result;
	result = 0;
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	return (sign * result);
}

#include <stdio.h>

int main()
{
	const char s1[] = "awsjj8675kbddw";
	int result;
	result = ft_atoi(s1);
	printf("%d", result);
	return (0);
}