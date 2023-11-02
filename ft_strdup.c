/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:35:44 by llai              #+#    #+#             */
/*   Updated: 2023/11/02 20:40:04 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	char	*ptr;

	len = ft_strlen(s) + 1;
	ptr = malloc(len * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s, len);
	return (ptr);
}
