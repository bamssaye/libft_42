/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 04:36:02 by bamssaye          #+#    #+#             */
/*   Updated: 2023/11/23 10:55:58 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	s;

	s = nmemb * size;
	if (size && (s / size) != nmemb)
		return (NULL);
	if (!s)
	{
		p = malloc(1);
		((char *)p)[0] = 0;
		return (p);
	}
	p = malloc(s);
	if (!p)
		return (NULL);
	memset(p, 0, s);
	return (p);
}
