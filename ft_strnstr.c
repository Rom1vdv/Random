/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 13:26:54 by romvan-d          #+#    #+#             */
/*   Updated: 2022/01/17 18:19:40 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	char *mod_haystack;
	
	i = 0;
	j = 0;
	mod_haystack = (char *) haystack;
	needle = (char *) needle;
	if (!needle)
		return (mod_haystack);
	while (mod_haystack[i] && i < len)
	{
		while (needle[j] == mod_haystack[i+j])
			{	
				if (needle[j+1] == '\0')
					return (&mod_haystack[i]);
				j++;
			}
		i++;	
	}
	return (NULL);
}
