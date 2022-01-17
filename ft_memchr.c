/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 11:35:27 by romvan-d          #+#    #+#             */
/*   Updated: 2022/01/17 18:19:00 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;
	unsigned char *ptr_str;
	
	i = 0;
	ptr_str = (unsigned char *) str;
	while (ptr_str[i] && i < n)
	{
		if (ptr_str[i] == c)
			return (&ptr_str[i]);
		i++;	
	}
	return (0);
}
