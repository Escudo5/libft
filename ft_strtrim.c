/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:47:27 by smarquez          #+#    #+#             */
/*   Updated: 2024/09/23 17:08:19 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char *ft_strtrim(char const *s1, char const *set)
{
	if (s1 == NULL || set == NULL)
		return (NULL);
	size_t s1_len;
	size_t set_len;

	s1_len = strlen(s1);
	set_len = strlen(set);


