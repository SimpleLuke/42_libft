/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 19:15:44 by llai              #+#    #+#             */
/*   Updated: 2023/11/08 14:24:02 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/* **************************************************************************
 *  Description:
 *  It checks if c is alphabetic.
 *
 *  Return value:
 *  Non-zero if c is alphabetic, zero if not.
 *
 * ************************************************************************** */
int		ft_isalpha(int c);

/* **************************************************************************
 *  Description:
 *  It checks if c is digit.
 *
 *  Return value:
 *  Non-zero if c is digit, zero if not.
 *
 * ************************************************************************** */
int		ft_isdigit(int c);

/* **************************************************************************
 *  Description:
 *  It checks if c is alphabetic or digit.
 *
 *  Return value:
 *  Non-zero if c is alphabetic or digit, zero if not.
 *
 * ************************************************************************** */
int		ft_isalnum(int c);

/* **************************************************************************
 *  Description:
 *  It checks if c is ascii character.
 *
 *  Return value:
 *  Non-zero if c is ascii character, zero if not.
 *
 * ************************************************************************** */
int		ft_isascii(int c);

/* **************************************************************************
 *  Description:
 *  It checks if c is printable character.
 *
 *  Return value:
 *  Non-zero if c is printable character, zero if not.
 *
 * ************************************************************************** */
int		ft_isprint(int c);

/* **************************************************************************
 *  Description:
 *  It converts a lower-case letter to the corresponding upper-case letter.
 *
 *  Return value:
 *  The corresponding upper-case letter if there is one.
 *  Otherwise, c is returned unchanged.
 *
 * ************************************************************************** */
int		ft_toupper(int c);

/* **************************************************************************
 *  Description:
 *  It converts a upper-case letter to the corresponding lower-case letter.
 *
 *  Return value:
 *  The corresponding lower-case letter if there is one.
 *  Otherwise, c is returned unchanged.
 *
 * ************************************************************************** */
int		ft_tolower(int c);

/* **************************************************************************
 *  Description:
 *  It calculates the length of the string, 
 *  excluding the terminating null byte ('\0')
 *
 *  Return value:
 *  The number of bytes in the string s.
 *
 * ************************************************************************** */
size_t	ft_strlen(const char *s);

/* **************************************************************************
 *  Description:
 *  It copies up to size - 1 characters from src to dst 
 *  and Nul-terminating the result if size is not 0.
 *  The Nul-terminating \0 character must be included in size.
 *
 *  Return value:
 *  The total length of the string they tried to create.
 *  The length of src.
 *
 * ************************************************************************** */
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

/* **************************************************************************
 *  Description:
 *  It appends string src to the end of dst.
 *  At most size - strlen(dst) - 1 characters.
 *  It will Nul-terminate, unless size is 0 
 *  or the original dst string was longer than size.
 *
 *  Return value:
 *  The total length of the string they tried to create.
 *  The initial length of dst + the length of src.
 *
 * ************************************************************************** */
size_t	ft_strlcat(char *dst, const char *src, size_t size);

/* **************************************************************************
 *  Description:
 *  It locates the first occurrence of c in the string s.
 *
 *  Return value:
 *  A pointer to the located character.
 *  NULL if the character does not appear in the string.
 *
 * ************************************************************************** */
char	*ft_strchr(const char *s, int c);

/* **************************************************************************
 *  Description:
 *  It locates the last occurrence of c in the string s.
 *
 *  Return value:
 *  A pointer to the located character.
 *  NULL if the character does not appear in the string.
 *
 * ************************************************************************** */
char	*ft_strrchr(const char *s, int c);

/* **************************************************************************
 *  Description:
 *  It compares the first n bytes between the strings s1 and s2.
 *
 *  Return value:
 *  An integer greater than, equal to, or less than 0
 *  if the string s1 is greater than, equal to, or less than the string s2.
 *
 * ************************************************************************** */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/* **************************************************************************
 *  Description:
 *  It locates the first occurrence of the null-terminated string little
 *  in the string big, where not more than len characters are searched.
 *  Characters that appear after a \0 are not searched.
 *
 *  Return value:
 *  A pointer to the little of the first occurrence of big.
 *  A pointer to big if little is empty.
 *  NULL if little did not occur in big.
 *
 * ************************************************************************** */
char	*ft_strnstr(const char *big, const char *little, size_t len);

/* **************************************************************************
 *  Description:
 *  It takes a substring from the given s 
 *  starting with start and ending with len characters.
 *  The new string will be allocated with memory.
 *
 *  Return value:
 *  A pointer to the new string.
 *  NULL if the memory allocation fails.
 *
 * ************************************************************************** */
char	*ft_substr(char const *s, unsigned int start, size_t len);

/* **************************************************************************
 *  Description:
 *  It concatenates the s1 and s2.
 *  The new string will be allocated with memory.
 *
 *  Return value:
 *  A pointer to the new concatenated string.
 *  NULL if the memory allocation fails.
 *
 * ************************************************************************** */
char	*ft_strjoin(char const *s1, char const *s2);

/* **************************************************************************
 *  Description:
 *  It removes any characters of the set 
 *  from the beginning and the end of the string s1.
 *  The new trimmed string will be allocated with memory.
 *
 *  Return value:
 *  A pointer to the new trimmed string.
 *  NULL if the memory allocation fails.
 *
 * ************************************************************************** */
char	*ft_strtrim(char const *s1, char const *set);

/* **************************************************************************
 *  Description:
 *  It creates an array of strings 
 *  by splitting the string s with the seperator c.
 *
 *  Return value:
 *  A pointer to the array of strings.
 *  NULL if the memory allocation fails.
 *
 * ************************************************************************** */
char	**ft_split(char const *s, char c);

/* **************************************************************************
 *  Description:
 *  It applies the function f to each character in the string s.
 *  The new string will be allocated to new memory.
 *
 *  Return value:
 *  A pointer to the new string.
 *  NULL is the memory allocation fails.
 *
 * ************************************************************************** */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/* **************************************************************************
 *  Description:
 *  It applies the function f to each character in the string s.
 *  Passing the index as the first argument 
 *  and the address of the character as second argument
 *  in the function f.
 *
 *  Return value:
 *  None.
 *
 * ************************************************************************** */
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

/* **************************************************************************
 *  Description:
 *  It erases data in the n bytes of memory starting at the location
 *  pointed to by s, by writing zeros('\0').
 *
 *  Return value:
 *  None
 *
 * ************************************************************************** */
void	ft_bzero(void *s, size_t n);

/* **************************************************************************
 *  Description:
 *  It fills the first n bytes of the memory area
 *  pointed to by s with the constant byte c.
 *
 *  Return value:
 *  A pointer to the memory area s.
 *
 * ************************************************************************** */
void	*ft_memset(void *s, int c, size_t n);

/* **************************************************************************
 *  Description:
 *  It copies n bytes from from memory area string src to area dest.
 *  The memory area may overlap. 
 *  The copy is always done in a non-desstructive manner.
 *  If the dest is found within src pointer and index n,
 *  copying will be done from back to front. Otherwise, front to back.
 *
 *  Return value:
 *  A pointer to dest.
 *
 * ************************************************************************** */
void	*ft_memmove(void *dest, const void *src, size_t n);

/* **************************************************************************
 *  Description:
 *  It compares the byte string s1 against byte string s2.
 *  Both strings are assumed to be n bytes long.
 *
 *  Return value:
 *  An integer greater than, equal to, or less than 0
 *  if the string s1 is greater than, equal to, or less than the string s2.
 *
 * ************************************************************************** */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/* **************************************************************************
 *  Description:
 *  It compares the byte string s1 against byte string s2.
 *  Both strings are assumed to be n bytes long.
 *
 *  Return value:
 *  An integer greater than, equal to, or less than 0
 *  if the string s1 is greater than, equal to, or less than the string s2.
 *
 * ************************************************************************** */
void	*ft_memcpy(void *dest, const void *src, size_t n);

/* **************************************************************************
 *  Description:
 *  It locates the first occurrence of c (converted to an unsigned char) 
 *  in string s with n bytes.
 *
 *  Return value:
 *  A pointer to the byte located, or NULL if no such byte exists within n bytes.
 *
 * ************************************************************************** */
void	*ft_memchr(const void *s, int c, size_t n);

/* **************************************************************************
 *  Description:
 *  It allocates enough memory for nmemb elements of size bytes each
 *  and filled with bytes of value zero.
 *
 *  Return value:
 *  A pointer to the allocated memory. NULL if the memory allocation fails.
 *
 * ************************************************************************** */
void	*ft_calloc(size_t nmemb, size_t size);

/* **************************************************************************
 *  Description:
 *  It allocateds sufficient memory for a copy of the string s,
 *  does the copy and returns a pointer to it.
 *
 *  Return value:
 *  A pointer to the new string. NULL if the memory allocation fails.
 *
 * ************************************************************************** */
char	*ft_strdup(const char *s);

/* **************************************************************************
 *  Description:
 *  It converts a string into an int.
 *
 *  Return value:
 *  A converted int.
 *  0 if invalid digit.
 *
 * ************************************************************************** */
int		ft_atoi(const char *nptr);

/* **************************************************************************
 *  Description:
 *  It converts the integer n into a string.
 *
 *  Return value:
 *  A pointer string of the integer.
 *
 * ************************************************************************** */
char	*ft_itoa(int n);

/* **************************************************************************
 *  Description:
 *  It writes the character 'c' to the given file descriptor.
 *
 *  Return value:
 *  None.
 *
 * ************************************************************************** */
void	ft_putchar_fd(char c, int fd);

/* **************************************************************************
 *  Description:
 *  It writes the string 's' to the given file descriptor.
 *
 *  Return value:
 *  None.
 *
 * ************************************************************************** */
void	ft_putstr_fd(char *s, int fd);

/* **************************************************************************
 *  Description:
 *  It writes the string 's' followed by a newline to the given file descriptor.
 *
 *  Return value:
 *  None.
 *
 * ************************************************************************** */
void	ft_putendl_fd(char *s, int fd);

/* **************************************************************************
 *  Description:
 *  It writes the integer 'n' to the given file descriptor.
 *
 *  Return value:
 *  None.
 *
 * ************************************************************************** */
void	ft_putnbr_fd(int n, int fd);

/* **************************************************************************
 * 	Description:
 * 	It allocates memory for a new list node 
 * 	and initialises content from parameter.
 * 	Set the next to NULL.
 *
 * 	Return value;
 * 	The new list node.
 *
 * ************************************************************************** */
t_list	*ft_lstnew(void *content);

/* **************************************************************************
 * 	Description:
 * 	It add new node to the head of the list.
 *
 * 	Return value;
 * 	None.
 *
 * ************************************************************************** */
void	ft_lstadd_front(t_list **lst, t_list *new);

/* **************************************************************************
 * 	Description:
 * 	It appends a new node to the end of the list.
 *
 * 	Return value;
 * 	None.
 *
 * ************************************************************************** */
void	ft_lstadd_back(t_list **lst, t_list *new);

/* **************************************************************************
 * 	Description:
 * 	It counts the size of the list.
 *
 * 	Return value;
 * 	The number of nodes.
 *
 * ************************************************************************** */
int		ft_lstsize(t_list *lst);

/* **************************************************************************
 * 	Description:
 * 	It finds the last node in the list.
 *
 * 	Return value;
 * 	The last node.
 *
 * ************************************************************************** */
t_list	*ft_lstlast(t_list *lst);

/* **************************************************************************
 * 	Description:
 * 	It deletes the content of a node.
 * 	And free the memory of the node.
 *
 * 	Return value;
 * 	None.
 *
 * ************************************************************************** */
void	ft_lstdelone(t_list *lst, void (*del)(void *));

/* **************************************************************************
 * 	Description:
 * 	It deletes every node of a list.
 * 	It frees the memory of every node
 * 	and sets the list to NULL.
 *
 * 	Return value;
 * 	None.
 *
 * ************************************************************************** */
void	ft_lstclear(t_list **lst, void (*del)(void *));

/* **************************************************************************
 * 	Description:
 * 	It applies function f to the content of every node in the list
 *
 * 	Return value;
 * 	None.
 *
 * ************************************************************************** */
void	ft_lstiter(t_list *lst, void (*f)(void *));

/* **************************************************************************
 * 	Description:
 * 	It creates a new list with applying function to the content
 * 	in the old list.
 * 	If memory allocation fails, the new list will be deleted
 * 	and be freed.
 *
 * 	Return value;
 * 	A new list containing new content values.
 * 	NULL if the memory allocation failed.
 *
 * ************************************************************************** */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
