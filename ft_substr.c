/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 19:51:28 by romvan-d          #+#    #+#             */
/*   Updated: 2022/02/15 15:20:36 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_malloc_substr(char *sub_str, unsigned int start,
		size_t len, size_t str_len)
{	
	if (len > (str_len - (size_t) start))
		sub_str = malloc(sizeof(*sub_str) * (str_len - start + 1));
	else if (len <= (str_len - (size_t) start))
		sub_str = malloc(sizeof(*sub_str) * len + 1);
	return (sub_str);
}

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char			*sub_str;
	unsigned int	i;
	unsigned int	j;
	size_t			str_len;

	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	sub_str = NULL;
	str_len = ft_strlen(str);
	sub_str = ft_malloc_substr(sub_str, start, len, str_len);
	if (!sub_str)
		return (NULL);
	while (str[i] && start < str_len)
	{
		while (i == start && j < len && str[i + j])
		{
			sub_str[j] = str[i + j];
			j++;
		}
		i++;
	}
	sub_str[j] = '\0';
	return (sub_str);
}
