/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houlekhi <houlekhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 10:23:47 by houlekhi          #+#    #+#             */
/*   Updated: 2014/11/22 18:15:15 by houlekhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (n--)
	{
		if (str[i] == (unsigned char)c)
			return ((void*)&str[i]);
		i++;
	}
	return (NULL);
}
