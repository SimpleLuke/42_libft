/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:00:13 by llai              #+#    #+#             */
/*   Updated: 2023/11/02 20:43:29 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*result;

	i = 0;
	if (!s)
		return (ft_strdup(""));
	else if (!f)
		return (ft_strdup(s));
	result = malloc((ft_strlen(s) + 1) * sizeof(char));
	while (s[i] != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}
	return (result);
}
