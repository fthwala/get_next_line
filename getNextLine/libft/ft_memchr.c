/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fthwala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 16:10:03 by fthwala           #+#    #+#             */
/*   Updated: 2017/06/08 15:56:04 by fthwala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s2;
	unsigned char	c2;
	size_t			i;

	i = 0;
	s2 = (unsigned char*)s;
	c2 = (unsigned char)c;
	while (n > 0)
	{
		if (*s2 != c2)
		{
			s2++;
		}
		else
			return (s2);
		n--;
	}
	return (NULL);
}
