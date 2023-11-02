/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:33:45 by llai              #+#    #+#             */
/*   Updated: 2023/11/02 21:03:51 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;

	little_len = ft_strlen(little);
	if (big == little || *little == '\0')
		return ((char *)(big));
	i = 0;
	while (big[i] != '\0' && len > i)
	{
		j = 0;
		while (big[i + j] != '\0' && little[j] != '\0'
			&& (i + j) < len && big[i + j] == little[j])
		{
			j++;
			if (j == little_len)
				return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}
