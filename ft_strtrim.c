/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 05:15:15 by bamssaye          #+#    #+#             */
/*   Updated: 2023/11/23 11:27:02 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(const char *s, int c)
{
	return (ft_strchr(s, c) != NULL);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		e;
	int		s;
	int		i;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	s = 0;
	i = 0;
	e = ft_strlen(s1);
	while (s1[s] && ft_check(set, s1[s]))
		s++;
	while (e > s && ft_check(set, s1[e - 1]))
		e--;
	str = malloc(((e - s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s < e)
		str[i++] = s1[s++];
	str[i] = '\0';
	return (str);
}
