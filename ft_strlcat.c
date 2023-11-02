/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:37:23 by llai              #+#    #+#             */
/*   Updated: 2023/11/02 20:42:06 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

static size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (*str++ != '\0')
		count++;
	return (count);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	j = dst_len;
	if (size <= dst_len)
		return (size + src_len);
	while (src[i] != '\0' && j < size - 1)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (dst_len + src_len);
}
