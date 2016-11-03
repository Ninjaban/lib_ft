/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 12:59:27 by jcarra            #+#    #+#             */
/*   Updated: 2016/11/03 15:21:40 by jcarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	char	*str;
	int		start;
	int		end;
	int		n;

	if (s == NULL)
		return (NULL);
	n = 0;
	start = 0;
	end = ft_strlen((char *)s) - 1;
	while (s[start] == ' ' || s[start] == '\t' || s[start] == '\n')
		start = start + 1;
	while (s[end] == ' ' || s[end] == '\t' || s[end] == '\n')
		end = end - 1;
	if (end < start)
		return (NULL);
	if ((str = malloc(end - start + 1)) == NULL)
		return (NULL);
	while (start <= end)
		str[n++] = s[start++];
	str[n] = '\0';
	return (str);
}
