/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 11:58:15 by romvan-d          #+#    #+#             */
/*   Updated: 2022/01/30 21:32:41 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cat_str;

	if (!s1)
		return (NULL);
	cat_str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!cat_str)
		return (NULL);
	ft_strlcpy(cat_str, s1, ft_strlen(s1) + 1);
	ft_strlcat(cat_str, s2, ft_strlen(s2) + ft_strlen(s1) + 1);
	return (cat_str);
}
