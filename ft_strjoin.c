/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 11:58:15 by romvan-d          #+#    #+#             */
/*   Updated: 2022/01/17 18:19:19 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cat_str;

	cat_str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!cat_str)
		return (NULL);
	ft_strlcpy(cat_str, s1, ft_strlen(s1)+1); // +1 car strlcat retire un char pour ajouter le \0
	ft_strlcat(cat_str, s2, ft_strlen(s2) + ft_strlen(s1)); // taille totale im stupid
	return (cat_str);
}
