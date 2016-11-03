/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 13:23:35 by jcarra            #+#    #+#             */
/*   Updated: 2016/11/03 17:02:19 by jcarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define ABS(Value) ((Value < 0) ? Value * -1 : Value)

# include <stdlib.h>
# include <unistd.h>

/*
**	Part 1
*/

void				ft_bzero(void *str, size_t n);
void				*ft_memchr(const void *str, int c, size_t n);
void				*ft_memccpy(void *str, const void *srcs, int c, size_t n);
void				*ft_memcpy(void *str, const void *src, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memset(void *str, int c, size_t n);
int					ft_strlen(char *str);
int					ft_tolower(int c);
int					ft_toupper(int c);

/*
**	Part 2
*/

void				ft_memdel(void **ap);
void				ft_strclr(char *s);
void				ft_strdel(char **as);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_putchar(char c);
void				ft_putnbr(int nbr);
void				ft_putendl(char *str);
void				ft_putstr(char *str);
void				ft_putchar_fd(char c, int fd);
void				ft_putnbr_fd(int nbr, int fd);
void				ft_putendl_fd(char *str, int fd);
void				ft_putstr_fd(char *str, int fd);
void				*ft_memalloc(size_t size);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strnew(size_t size);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s);
unsigned long int	ft_revnbr(unsigned long int nbr);

#endif








