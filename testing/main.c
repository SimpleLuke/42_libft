/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 09:40:10 by llai              #+#    #+#             */
/*   Updated: 2023/11/01 22:07:33 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <ctype.h>
#include <stddef.h>
#include <string.h>
#include <limits.h>

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
	//char		dest[] = "old";
	//const char	src[] = "newstring";
	char	src[] = "newstring";
	char	*dest = src + 5;

	printf("Reproduce\n");
	printf("BEFORE dest = %s, src = %s\n", dest, src);
	ft_memmove(dest, src, 3);
	printf("AFTER dest = %s, src = %s\n", dest, src);
	printf("\n");

	char	src2[] = "newstring";
	char	*dest2 = src2 + 5;
	printf("Original\n");
	printf("BEFORE dest = %s, src = %s\n", dest2, src2);
	memmove(dest2, src2, 3);
	printf("AFTER dest = %s, src = %s\n", dest2, src2);
	
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

void	test_toupper(void)
{
	printf("/--------test ft_toupper--------/\n");
	printf("\n");
	char	c1 = 'c';
	char	c2 = '0';
	char	c3 = 'K';

	printf("Char %c becomes %c\n", c1, ft_toupper(c1));
	printf("Char %c becomes %c\n", c3, ft_toupper(c3));
	printf("Char %c becomes %c\n", c2, ft_toupper(c2));
	printf("\n");
}

void	test_tolower(void)
{
	printf("/--------test ft_tolower--------/\n");
	printf("\n");
	char	c1 = 'c';
	char	c2 = '0';
	char	c3 = 'K';

	printf("Char %c becomes %c\n", c1, ft_tolower(c1));
	printf("Char %c becomes %c\n", c3, ft_tolower(c3));
	printf("Char %c becomes %c\n", c2, ft_tolower(c2));
	printf("\n");
}

void	test_strchr(void)
{
	printf("/--------test ft_strchr--------/\n");
	printf("\n");
	const char	str[] = "Hello";
	char	*result1;
	char	*result2;

	printf("Checking => Hello\n");
	printf("Check the l occurence\n");
	result1 = strchr(str, 'l');
	result2 = ft_strchr(str, 'l');
	if (strcmp(result1, result2) == 0)
		printf("PASS: Expected %s, got %s.\n", result1, result2);
	else
		printf("FAIL: Expected %s, got %s.\n", result1, result2);
	printf("\n");
	printf("Check the \\0 occurence\n");
	result1 = strchr(str, '\0');
	result2 = ft_strchr(str, '\0');
	if (strcmp(result1, result2) == 0)
		printf("PASS: Expected %s, got %s.\n", result1, result2);
	else
		printf("FAIL: Expected %s, got %s.\n", result1, result2);
	printf("\n");
	printf("Check the a occurence\n");
	result2 = ft_strchr(str, 'a');
	if (result2 == NULL)
		printf("PASS: Expected NULL, got NULL.\n");
	else
		printf("FAIL: Expected NULL, got %s.\n", result2);
	printf("\n");
}

void	test_strrchr(void)
{
	printf("/--------test ft_strrchr--------/\n");
	printf("\n");
	const char	str[] = "Hello";
	char	*result1;
	char	*result2;

	printf("Checking => Hello\n");
	printf("Check the l occurence\n");
	result1 = strrchr(str, 'l');
	result2 = ft_strrchr(str, 'l');
	if (strcmp(result1, result2) == 0)
		printf("PASS: Expected %s, got %s.\n", result1, result2);
	else
		printf("FAIL: Expected %s, got %s.\n", result1, result2);
	printf("\n");
	printf("Check the \\0 occurence\n");
	result1 = strchr(str, '\0');
	result2 = ft_strchr(str, '\0');
	if (strcmp(result1, result2) == 0)
		printf("PASS: Expected %s, got %s.\n", result1, result2);
	else
		printf("FAIL: Expected %s, got %s.\n", result1, result2);
	printf("\n");
	printf("Check the a occurence\n");
	result2 = ft_strrchr(str, 'a');
	if (result2 == NULL)
		printf("PASS: Expected NULL, got NULL.\n");
	else
		printf("FAIL: Expected NULL, got %s.\n", result2);
	printf("\n");
}

void	test_strncmp(void)
{
	printf("/--------test ft_strncmp--------/\n");
	printf("\n");
	char	str1[] = "Hello12";
	char	str2[] = "Hello456";
	int	result1;
	int	result2;

	printf("Comparing %s and %s\n", str1, str2);
	result1 = ft_strncmp(str1, str2, 5);
	result2 = ft_strncmp(str1, str2, 6);

	printf("5 bytes\n");
	if (result1 == 0)
		printf("PASS: they are equal.\n");
	else if (result1 > 0)
		printf("FAIL: %s is greater than %s\n", str1, str2);
	else
		printf("FAIL: %s is less than %s\n", str1, str2);
	printf("6 bytes\n");
	if (result2 < 0)
		printf("PASS: %s is less than %s\n", str1, str2);
	else if (result2 > 0)
		printf("FAIL: %s is greater than %s\n", str1, str2);
	else
		printf("FAIL: they are equal.\n");
}

void	test_memchr(void)
{
	printf("/--------test ft_memchr--------/\n");
	printf("\n");
	const char	str[] = "Hello";
	char	*result1;
	char	*result2;

	printf("Checking => Hello\n");
	printf("Check the l occurence\n");
	result1 = memchr(str, 'l', 5);
	result2 = ft_memchr(str, 'l', 5);
	if (strcmp(result1, result2) == 0)
		printf("PASS: Expected %s, got %s.\n", result1, result2);
	else
		printf("FAIL: Expected %s, got %s.\n", result1, result2);
	printf("\n");
	printf("Check the \\0 occurence\n");
	result1 = memchr(str, '\0', 6);
	result2 = ft_memchr(str, '\0', 6);
	if (strcmp(result1, result2) == 0)
		printf("PASS: Expected %s, got %s.\n", result1, result2);
	else
		printf("FAIL: Expected %s, got %s.\n", result1, result2);
	printf("\n");
	printf("Check the a occurence\n");
	result2 = ft_memchr(str, 'a', 6);
	if (result2 == NULL)
		printf("PASS: Expected NULL, got NULL.\n");
	else
		printf("FAIL: Expected NULL, got %s.\n", result2);
	printf("\n");
}

void	test_strnstr(void)
{
	printf("/--------test ft_strnstr--------/\n");
	printf("\n");
	char	big[] = "Hello123Hello123";
	char	small[] = "123";
	char	small2[] = "";
	char	small3[] = "123";
	char	*result1;
	char	*result2;

	printf("The Big string is =>%s\n", big);
	printf("Check Small =>%s\n", small);
	result1 = strnstr(big, small, 8);
	result2 = ft_strnstr(big, small, 8);
	if (strcmp(result1, result2) == 0)
		printf("PASS: Expected %s, got %s\n", result1, result2);
	else
		printf("FAIL: Expected %s, got %s\n", result1, result2);
	printf("Check Small2 =>%s\n", small2);
	result1 = strnstr(big, small2, 8);
	result2 = ft_strnstr(big, small2, 8);
	if (strcmp(result1, result2) == 0)
		printf("PASS: Expected %s, got %s\n", result1, result2);
	else
		printf("FAIL: Expected %s, got %s\n", result1, result2);
	printf("Check Small3 =>%s with 5 bytes search\n", small3);
	result1 = strnstr(big, small3, 5);
	result2 = ft_strnstr(big, small3, 5);
	if (result2 == NULL)
		printf("PASS: Expected %s, got %s\n", result1, result2);
	else
		printf("FAIL: Expected %s, got %s\n", result1, result2);
	printf("\n");
}

void	test_atoi(void)
{
	printf("/--------test ft_atoi--------/\n");
	printf("\n");
	int	result1;
	int	result2;

	printf("Check 0\n");
	result1 = atoi("0");
	result2 = ft_atoi("0");
	if (result1 == result2)
		printf("PASS: Expected %d, got %d\n", result1, result2);
	else
		printf("FAIL: Expected %d, got %d\n", result1, result2);
	printf("\n");
	printf("Check INT_MAX 2147483647\n");
	result1 = atoi("2147483647");
	result2 = ft_atoi("2147483647");
	if (result1 == result2)
		printf("PASS: Expected %d, got %d\n", result1, result2);
	else
		printf("FAIL: Expected %d, got %d\n", result1, result2);
	printf("\n");
	printf("Check INT_MIN -2147483648\n");
	result1 = atoi("-2147483648");
	result2 = ft_atoi("-2147483648");
	if (result1 == result2)
		printf("PASS: Expected %d, got %d\n", result1, result2);
	else
		printf("FAIL: Expected %d, got %d\n", result1, result2);
	printf("\n");
	printf("Check Neg Num with sapce and tab -32\n");
	result1 = atoi("	  -32");
	result2 = ft_atoi("	  -32");
	if (result1 == result2)
		printf("PASS: Expected %d, got %d\n", result1, result2);
	else
		printf("FAIL: Expected %d, got %d\n", result1, result2);
	printf("\n");
	printf("Check Invalid --32\n");
	result1 = atoi("--32");
	result2 = ft_atoi("--32");
	if (result1 == result2)
		printf("PASS: Expected %d, got %d\n", result1, result2);
	else
		printf("FAIL: Expected %d, got %d\n", result1, result2);
	printf("\n");
}

void	test_calloc(void)
{
	printf("/--------test ft_calloc--------/\n");
	printf("\n");
	int	*ptr;

	ptr = ft_calloc(8, sizeof(int));
	for (int i = 0; i < 8; i++)
		printf("%d:%d\n", i, ptr[i]);
	free(ptr);
	printf("\n");
}

void	test_strdup(void)
{
	printf("/--------test ft_strdup--------/\n");
	printf("\n");
	char	str[] = "Hello";
	char	*ptr1;
	char	*ptr2;

	printf("Duplicate %s to pointer\n", str);
	ptr1 = strdup(str);
	ptr2 = ft_strdup(str);
	if (strcmp(ptr1, ptr2) == 0)
		printf("PASS: Expected %s, got %s\n", ptr1, ptr2);
	else
		printf("FAIL: Expected %s, got %s\n", ptr1, ptr2);
	free(ptr1);
	free(ptr2);
	printf("\n");
}

void	test_substr(void)
{
	printf("/--------test ft_substr--------/\n");
	printf("\n");
	char	str[] = "Hello123Hello";
	char	*ptr;

	ptr = ft_substr(str, 5, 3);
	printf("Checking Hello123Hello with start 5 and len 3\n");
	if(strcmp(ptr, "123") == 0)
		printf("PASS: Expected 123, got %s\n", ptr);
	else
		printf("FAIL: Expected 123, got %s\n", ptr);
	free(ptr);
	printf("\n");
}

void	test_strjoin(void)
{
	printf("/--------test ft_strjoin--------/\n");
	printf("\n");
	char	str1[] = "Hello";
	char	str2[] = "123";
	char	*result;

	printf("Joining %s and %s\n", str1, str2);
	result = ft_strjoin(str1, str2);
	if (strcmp(result, "Hello123") == 0)
		printf("PASS: Expected Hello123, got %s\n", result);
	else
		printf("FAIL: Expected Hello123, got %s\n", result);
	free(result);
	printf("\n");
}

void	test_strtrim(void)
{
	printf("/--------test ft_strtrim--------/\n");
	printf("\n");
	char	*result;

	printf("Trim \"\" with 1\n");
	result = ft_strtrim("", "1");
	if (!strcmp(result, ""))
		printf("PASS: Expected \"\", got %s\n", result);
	else
		printf("FAIL: Expected \"\", got %s\n", result);
	free(result);
	printf("Trim abc with \"\"\n");
	result = ft_strtrim("abc", "");
	if (!strcmp(result, ""))
		printf("PASS: Expected \"\", got %s\n", result);
	else
		printf("FAIL: Expected \"\", got %s\n", result);
	free(result);
	printf("Trim lllhellollll with l\n");
	result = ft_strtrim("lllhellolll", "l");
	if (!strcmp(result, "hello"))
		printf("PASS: Expected hello, got %s\n", result);
	else
		printf("FAIL: Expected hello, got %s\n", result);
	free(result);
	printf("Trim lllhellollll with hel\n");
	result = ft_strtrim("lllhellolll", "hel");
	if (!strcmp(result, "o"))
		printf("PASS: Expected hello, got %s\n", result);
	else
		printf("FAIL: Expected hello, got %s\n", result);
	free(result);
	printf("Trim lllhellollll with hello\n");
	result = ft_strtrim("lllhellolll", "hello");
	if (!strcmp(result, ""))
		printf("PASS: Expected \"\", got %s\n", result);
	else
		printf("FAIL: Expected \"\", got %s\n", result);
	free(result);
	printf("Trim lllhellollll with hello\n");
	result = ft_strtrim("lllhellolll", "hello");
	if (!strcmp(result, ""))
		printf("PASS: Expected \"\", got %s\n", result);
	else
		printf("FAIL: Expected \"\", got %s\n", result);
	free(result);
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

	printf("/--------Convert Char--------/\n");
	printf("\n");
	test_toupper();
	test_tolower();

	printf("/--------Check String--------/\n");
	printf("\n");
	test_memset();
	test_bzero();
	test_memmove();
	test_strlcpy();
	test_strlcat();
	test_strchr();
	test_strrchr();
	test_strncmp();
	test_memchr();
	test_strnstr();
	test_atoi();


	printf("/--------Check Memory--------/\n");
	printf("\n");
	test_calloc();
	test_strdup();

	printf("/--------Check Additional--------/\n");
	printf("\n");
	test_substr();
	test_strjoin();
	test_strtrim();

	return (0);
}
