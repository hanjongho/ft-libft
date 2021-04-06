/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjongho <hanjongho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 17:45:26 by hanjongho         #+#    #+#             */
/*   Updated: 2020/10/29 22:52:57 by hanjongho        ###   ########.fr       */
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

int					ft_atoi(const char *str);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
int					ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_strncmp(const char *str1, const char *str2, size_t n);
void				ft_bzero(void *str, size_t n);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr_fd(char *s, int fd);
void				*ft_calloc(size_t n, size_t size);
void				*ft_memccpy(void *dest, const void *src, int c,
					size_t count);
void				*ft_memchr(void *ptr, int value, size_t num);
void				*ft_memcpy(void *dest, const void *src, size_t num);
void				*ft_memmove(void *dest, const void *src, size_t num);
void				*ft_memset(void *ptr, int value, size_t num);
char				*ft_itoa(int n);
char				*ft_strchr(char const *str, int c);
char				*ft_strdup(const char *s);
char				*ft_strjoin(char *s1, char *s2);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strnstr(char *big, char *little, size_t len);
char				*ft_strrchr(char *str, int ch);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_substr(char const *str, unsigned int start, size_t len);
char				**ft_split(char const *str, char charset);
size_t				ft_strlcat(char *dest, char *src, size_t size);
size_t				ft_strlcpy(char *dest, char *src, size_t size);
size_t				ft_strlen(const char *str);
t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));

#endif
