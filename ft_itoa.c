/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:39:55 by llai              #+#    #+#             */
/*   Updated: 2023/11/02 20:36:58 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int num)
{
	int	count;

	count = 0;
	if (num == INT_MIN)
	{
		count += 2;
		num /= -10;
	}
	else if (num < 0)
	{
		count++;
		num = -num;
	}
	if (num == 0)
		count++;
	while (num > 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}

static char	*ft_num_to_str(int len, char *result, long n)
{
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	if (n < 0)
	{
		result[0] = '-';
		n = -n;
	}
	result[len] = '\0';
	while (len - 1)
	{
		result[len - 1] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	if (result[0] != '-')
		result[0] = (n % 10) + '0';
	return (result);
}

char	*ft_itoa(int n)
{
	int		len;
	long	num;
	char	*result;

	num = n;
	len = ft_numlen(num);
	result = NULL;
	result = ft_num_to_str(len, result, num);
	return (result);
}
