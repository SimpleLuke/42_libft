/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:45:16 by llai              #+#    #+#             */
/*   Updated: 2023/10/31 15:06:33 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest_ptr;
	const char	*src_ptr;

	if (src == dest)
		return (dest);
	dest_ptr = (char *)dest;
	src_ptr = (const char*)src;
	if (src_ptr < dest_ptr && (src_ptr + n) > dest_ptr)
		while (n--)
			*(dest_ptr + n) = *(src_ptr + n);
	else
		while (n--)
			*dest_ptr++ = *src_ptr++;
	return (dest);
}
