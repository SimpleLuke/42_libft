/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:22:20 by llai              #+#    #+#             */
/*   Updated: 2023/11/02 20:42:52 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
 *  Description:
 *  It copies up to size - 1 characters from src to dst and Nul-terminating the result if size is not 0.
 *  The Nul-terminating \0 character must be included in size.
 *
 *  Return value:
 *  The total length of the string they tried to create.
 *  The length of src.
 *
 */

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char		*dst_ptr;
	const char	*src_ptr;

	dst_ptr = dst;
	src_ptr = src;
	while (size - 1 > 0)
	{
		*dst_ptr++ = *src_ptr++;
		size--;
	}
	*dst_ptr = '\0';
	return (ft_strlen(src));
}
