/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <jricafor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 17:08:41 by jricafor          #+#    #+#             */
/*   Updated: 2020/04/27 17:08:45 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int dest_s;
	unsigned int src_s;

	i = 0;
	dest_s = ft_strlen(dest);
	src_s = ft_strlen(src);
	if (size == 0)
		return (src_s);
	if (dest_s >= size)
		return (src_s + size);
	size = size - dest_s;
	while (src[i] != '\0' && size != 1)
	{
		dest[dest_s + i] = src[i];
		i++;
		size--;
	}
	dest[dest_s + i] = '\0';
	return (dest_s + src_s);
}
