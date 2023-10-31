/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 09:40:10 by llai              #+#    #+#             */
/*   Updated: 2023/10/31 17:35:07 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <ctype.h>
#include <stddef.h>
#include <string.h>

void	test_isalpha(void)
{
	int	c;

	printf("/--------test ft_isalpha--------/\n");
	printf("\n");
	for(int i = 32; i < 127; i++)
	{
		c = i;
		if (ft_isalpha(c))
			printf("%c is alphabetic.\n", c);
		else
			printf("%c is NOT alphabetic.\n", c);
	}
	printf("\n");
}

void	test_isdigit(void)
{
	int	c;

	printf("/--------test ft_isdigit--------/\n");
	printf("\n");
	for(int i = 32; i < 127; i++)
	{
		c = i;
		if (ft_isdigit(c))
			printf("%c is a digit.\n", c);
		else
			printf("%c is NOT a digit.\n", c);
	}
	printf("\n");
}

void	test_isalnum(void)
{
	int	c;

	printf("/--------test ft_isalnum--------/\n");
	printf("\n");
	for(int i = 32; i < 127; i++)
	{
		c = i;
		if (ft_isalnum(c))
			printf("%c is alphanumeric.\n", c);
		else
			printf("%c is NOT alphanumeric.\n", c);
	}
	printf("\n");
}

void	test_isascii(void)
{
	int	c;

	printf("/--------test ft_isascii--------/\n");
	printf("\n");
	for(int i = -10; i <130 ; i++)
	{
		c = i;
		if (ft_isascii(c))
			printf("%d: %c is a ascii character.\n", c, i);
		else
			printf("%d: %c is NOT an ascii character.\n", c, i);
	}
	printf("\n");
}

void	test_isprint(void)
{
	int	c;

	printf("/--------test ft_isprint--------/\n");
	printf("\n");
	for(int i = 0; i < 128 ; i++)
	{
		c = i;
		if (ft_isprint(c))
			printf("%d: %c is printable.\n", c, i);
		else
			printf("%d: %c is NOT printable.\n", c, i);
	}
	printf("\n");
}

void	test_strlen(void)
{
	printf("/--------test ft_strlen--------/\n");
	printf("\n");
	char	str[] = "Hello";
	if (ft_strlen(str) == strlen(str))
		printf("%s is %ld long.\n", str, ft_strlen(str));
	else
		printf("Expect: %s is %ld long, but got %ld.\n", str, strlen(str), ft_strlen(str));
	printf("\n");
}

void	test_memset(void)
{
	printf("/--------test ft_memset--------/\n");
	printf("\n");
	char 	str[50] = "Hello how are you?";
	char 	str2[50] = "Hello how are you?";
	char	*result1;
	char	*result2;

	printf("Before memset: %s\n",str);
	result1 = memset(str, '.', 5 * sizeof(char));
	result2 = ft_memset(str2, '.', 5 * sizeof(char));
	if (strcmp(result1, result2) == 0)
		printf("Replace 5 dot over Hello => %s\n", result2);
	else
		printf("Expected %s, but got %s\n", result1, result2);
	printf("\n");
}

void	test_bzero(void)
{
	printf("/--------test ft_bzero--------/\n");
	printf("\n");
	char	str[] = "Hello how are you?";

	printf("BEFORE:%s\n", str);
	ft_bzero(str, 5);
	for(int i = 0; i < 6; i++)
		printf("%d:AFTER:%s\n", i, str + i);
	printf("\n");
}

void	test_memmove(void)
{
	printf("/--------test ft_memmove--------/\n");
	printf("\n");
	char		dest[] = "oldstring";
	const char	src[] = "newstring";

	printf("BEFORE dest = %s, src = %s\n", dest, src);
	ft_memmove(dest, src, 9);
	printf("AFTER dest = %s, src = %s\n", dest, src);
	printf("\n");
}

void	test_strlcpy(void)
{
	printf("/--------test ft_strlcpy--------/\n");
	printf("\n");

	char		dest[] = "oldstring here";
	const char	src[] = "newstring";
	size_t		result;

	printf("BEFORE dest = %s, src = %s\n", dest, src);
	result = ft_strlcpy(dest, src, 10);
	printf("AFTER dest = %s, src = %s, return %ld\n", dest, src, result);
	printf("\n");
}

void	test_strlcat(void)
{
	printf("/--------test ft_strlcat--------/\n");
	printf("\n");

	char		dest[23] = "oldstring here";
	const char	src[] = "newstring";
	size_t		result;
	char		dest2[23] = "oldstring";
	const char	src2[] = "newstring";
	size_t		result2;

	printf("NOT ENGOUGH BUFFER\n");
	printf("BEFORE dest = %s, src = %s\n", dest, src);
	result = ft_strlcat(dest, src, 7);
	printf("AFTER dest = %s, src = %s, return %ld\n", dest, src, result);

	printf("ENGOUGH BUFFER\n");
	printf("BEFORE dest = %s, src = %s\n", dest2, src2);
	result2 = ft_strlcat(dest2, src2, 23);
	printf("AFTER dest = %s, src = %s, return %ld\n", dest2, src2, result2);
	printf("\n");
}
int	main(void)
{

	printf("/--------Check Char--------/\n");
	printf("\n");
	test_isalpha();
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_isprint();
	test_strlen();


	printf("/--------Check String--------/\n");
	printf("\n");
	test_memset();
	test_bzero();
	test_memmove();
	test_strlcpy();
	test_strlcat();

	return (0);
}
