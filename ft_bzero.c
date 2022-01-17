/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:06:41 by romvan-d          #+#    #+#             */
/*   Updated: 2022/01/17 18:18:34 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *str, size_t len)
{
	int				i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *) str;
	while (len > 0)
	{
		ptr[i] = 0;
		i++;
		len--;
	}
	return (0);
}
