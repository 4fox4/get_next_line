/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houlekhi <houlekhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 15:02:35 by houlekhi          #+#    #+#             */
/*   Updated: 2014/11/22 18:18:37 by houlekhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char				*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*dst;

	if (s == NULL)
		return (NULL);
	dst = ft_strnew(len + 1);
	i = 0;
	if (dst == NULL)
		return (NULL);
	while (i < len + start)
	{
		if (i >= start)
			dst[i - start] = s[i];
		i++;
	}
	return (dst);
}
