/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:12:16 by llai              #+#    #+#             */
/*   Updated: 2023/11/01 13:16:02 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
 *  Description:
 *  It locates the first occurrence of c (converted to an unsigned char) 
 *  in string s with n bytes.
 *
 *  Return value:
 *  A pointer to the byte located, or NULL if no such byte exists within n bytes.
 */

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		if (*ptr == c)
			return (ptr);
		ptr++;
		n--;
	}
	return (NULL);
}
