/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:33:45 by llai              #+#    #+#             */
/*   Updated: 2023/11/01 15:13:35 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdio.h>

static int	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	while (*str++ != '\0')
		count++;
	return (count);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;
	size_t	count;

	i = 0;
	j = 0;
	count = 1;
	if (*little == '\0')
		return (char *)(big);
	while (big[i] != '\0' && len >= count)
	{
		if (big[i] == little[j])
		{

			while (big[i] == little[j] && len >= count)
			{
				j++;
				i++;
				if (little[j] == '\0')
					return (char *)(big + (count - ft_strlen(little)));
				count++;
			}
			j = 0;
		}
		else
			i++;
		count++;
	}
	return (NULL);
}
