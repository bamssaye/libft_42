/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:11:56 by bamssaye          #+#    #+#             */
/*   Updated: 2023/11/23 06:38:54 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	d;
	size_t	s;

	if (!dest && !n)
		return (0);
	s = ft_strlen(src);
	d = ft_strlen(dest);
	if (d >= n)
		return (n + s);
	if (s < n - d)
		ft_memcpy(dest + d, src, s + 1);
	else
	{
		ft_memcpy(dest + d, src, n - d - 1);
		dest[n - 1] = '\0';
	}
	return (s + d);
}
