/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:07:56 by smarquez          #+#    #+#             */
/*   Updated: 2024/10/03 15:48:20 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*joined;

	if ((s1 == NULL || s2 == NULL))
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	joined = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
	if (joined == NULL)
		return (NULL);
	ft_memcpy(joined, s1, s1_len);
	ft_memcpy(joined + s1_len, s2, s2_len);
	joined[s1_len + s2_len] = '\0';
	return (joined);
}

/*int main()
{
	char	*s1 = "Hello ";
	char	*s2 = "World!";
	char	*joined;

	joined = ft_strjoin(s1, s2);
	if (joined != NULL)
	{
		printf("Joined string: %s\n", joined);
		free(joined);
	}
	else
		printf("Error joining strings\n");
	return (0);
}
*/