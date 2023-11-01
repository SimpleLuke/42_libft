/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:58:19 by llai              #+#    #+#             */
/*   Updated: 2023/11/01 18:33:40 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

static void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char*)s;
	while (n-- > 0)
		*ptr++ = '\0';
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
