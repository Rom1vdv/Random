/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:53:42 by romvan-d          #+#    #+#             */
/*   Updated: 2022/01/27 19:32:04 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char *ft_trimleft(char *s, char *set)
{
	int	i;
	int	j;

	i = 0;
	while(s[i])
	{
		j = 0;
		while(set[j])
		{
			if (s[i] != set[j])
				j++;
		}
		i++;
	}
	return (&s[i]);
}




char	*ft_strtrim(char const *s1, char const *set)
{
	if (!s1)
		return(NULL);
	
}

#include <stdio.h>

int main(void)
{
	printf("%s\n", ft_trimleft("salut", "as"));	
}