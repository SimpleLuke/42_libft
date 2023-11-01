/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:30:06 by llai              #+#    #+#             */
/*   Updated: 2023/11/01 21:26:31 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

static int	is_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	start;
	int	end;

	i = 0;
	start = 0;
	end = 0;
	if (!ft_strlen(s1))
		return ft_strdup("");
	if (!ft_strlen(set))
		return ft_strdup("");
	while (is_set(s1[i++], set))
		start++;
	i = ft_strlen(s1) - 1;
	while (is_set(s1[i--], set))
		end++;
	return (ft_substr(s1, start, ft_strlen(s1) - start - end));
}
