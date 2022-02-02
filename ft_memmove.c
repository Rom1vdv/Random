/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:42:40 by romvan-d          #+#    #+#             */
/*   Updated: 2022/01/18 18:19:23 by romvan-d         ###   ########.fr       */
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
		mod_dst[len] = mod_src[len];
		i++;
		len--;
	}
	return (dst);
}
