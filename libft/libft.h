/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 14:13:28 by lweeper           #+#    #+#             */
/*   Updated: 2020/11/04 17:46:09 by lweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *b, size_t len);
void				*ft_memcpy (void *dest, const void *src, size_t n);
void				*ft_memccpy (void *dest, const void *src, int c, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memchr(const void *arr, int c, size_t n);
size_t				ft_strlen(const char *str);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
size_t				ft_strlcat(char *dst, const char *src, size_t dsize);
char				*ft_strchr(const char *str, int sym);
char				*ft_strrchr(const char *str, int sym);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strnstr(const char *haystack, const char *needle,
								size_t len);
int					ft_atoi(const char *str);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
void				*ft_calloc(size_t count, size_t size);
char				*ft_strdup(const char *src);
char				*ft_substr(char const *s, unsigned int start, size_t n);
char				*ft_strjoin(char const *s1, char const *s2);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
char				*ft_itoa(int n);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_strmapi(char const *s, char(*f)(unsigned int, char));
t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *new);
char				**ft_split(char const *s, char c);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void(*del)(void *));
void				ft_lstclear(t_list **lst, void(*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
							void (*del)(void *));
int					ft_min_i(int i1, int i2);
void				ft_putnbr_fd_l(long n, int fd);
int					ft_abs_i(int a);
long				ft_abs_l(long a);
void				ft_putstr_fd_first_n(char *s, int fd, int count);
int					ft_max(int a, int b);

#endif