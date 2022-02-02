/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 19:51:28 by romvan-d          #+#    #+#             */
/*   Updated: 2022/02/02 16:27:04 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char			*sub_str;
	unsigned int	i;
	unsigned int	j;

	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	sub_str = malloc(sizeof(char) * len + 1);
	if (!sub_str)
		return (NULL);
	while (str[i])
	{
		while (i == start && j < len)
		{
			sub_str[j] = str[i + j];
			j++;
		}	
		i++;
	}
	sub_str[j] = '\0';
	return (sub_str);
}
