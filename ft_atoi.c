/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:16:43 by llai              #+#    #+#             */
/*   Updated: 2023/11/01 17:01:42 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
static int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	num;
	int	isNeg;
	int	i;

	num = 0;
	isNeg = 1;
	i = 0;
	while (nptr[i] && (nptr[i] == ' ' || nptr[i] == '\t'
			|| nptr[i] == '\n' || nptr[i] == '\v'
			|| nptr[i] == '\v' || nptr[i] == '\f'))
		i++;
	if (nptr[i] == '+')
		i++;
	else if (nptr[i] == '-')
	{
		isNeg *= -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		num = (num * 10) + (nptr[i] - '0');
		i++;
	}
	return (num * isNeg);
}
