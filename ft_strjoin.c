/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:39:47 by llai              #+#    #+#             */
/*   Updated: 2023/11/01 20:15:12 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

static int	ft_strlen(char const *str)
{
	int	count;

	count = 0;
	while (*str++ != '\0')
		count++;
	return (count);
}


char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int	s1_len;
	int	s2_len;
	int	i;
	
	i = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	ptr = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (*s1 != '\0')
		ptr[i++] = *s1++;
	while (*s2 != '\0')
		ptr[i++] = *s2++;
	ptr[i] = '\0';
	return (ptr);

}
