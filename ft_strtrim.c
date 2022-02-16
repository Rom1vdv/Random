/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:53:42 by romvan-d          #+#    #+#             */
/*   Updated: 2022/02/16 18:00:43 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
static char	*ft_trimleft(char *s, char *set)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = ft_strdup(s);
	if (!str)
		return (NULL);
	while (str[i])
	{
		if (!ft_strchr(set, str[i]))
		{
			while(j != i)
			{
				str[j] = str[i + j];
				j++;
			}
		}
		i++;
		str[j] = '\0';
	}
	return (str);
}

static char	*ft_trimright(char *s, char *set)
{
	size_t	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (!ft_strchr(set, s[i]))
		{
			s[i + 1] = '\0';
			return (s);
		}	
		i--;
	}	
	return (s);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_str;

	if (!s1 || !set)
		return (NULL);
	trimmed_str = ft_strdup(s1);
	if (!trimmed_str)
		return (NULL);
	trimmed_str = ft_trimleft(trimmed_str, (char *)set);
	trimmed_str = ft_trimright(trimmed_str, (char *)set);
	return (trimmed_str);
}
#include <stdio.h>

int main(void)
{
    char c[] = "salut";
    char set[] = "satu";
    printf("Resultat : %s\n", ft_strtrim(c, set));    
}