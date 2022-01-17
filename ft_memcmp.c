/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 13:13:07 by romvan-d          #+#    #+#             */
/*   Updated: 2022/01/17 18:19:03 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	unsigned char *ptr_str1;
	unsigned char *ptr_str2;

	i = 0;
	ptr_str1 = (unsigned char *) s1;
	ptr_str2 = (unsigned char *) s2;
	while (ptr_str1[i] && ptr_str1[i] == ptr_str2[i] && i < n)
		i++;
	return (ptr_str1[i] - ptr_str2[i]);
}
