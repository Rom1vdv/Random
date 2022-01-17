/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:42:40 by romvan-d          #+#    #+#             */
/*   Updated: 2022/01/17 18:19:08 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dst,const void *src, size_t len)
{
	int				i;
	unsigned char	*mod_dst;
	unsigned char	*mod_src;
	unsigned char	*src_buffer;

	i = 0;
	mod_src = (unsigned char *) src;
	src_buffer = (unsigned char *) src;
	mod_dst = (unsigned char *) dst;
	while (len > 0)
	{
		src_buffer[i] = mod_src[i];
		mod_dst[i] = src_buffer[i];
		i++;
		len--;
	}
	return (dst);
}
