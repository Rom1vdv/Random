/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 19:51:28 by romvan-d          #+#    #+#             */
/*   Updated: 2022/01/17 18:20:04 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*int	ft_size(char const *str)
{
		commencer i a start pour tester
}
*/
char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	//char			*str;
	char			*sub_str;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	//str = (char *) str;
	sub_str = malloc(sizeof(char) * len + 1);
	if (!sub_str)
		return (NULL);
	while(str[i])
	{
		while (i == start && j < len)
			{
				sub_str[j] = str[i+j]; // i+j car si c'est que i, il copie le meme char en boucle dans sub_str
				j++;
			}	
		i++;
	}
	sub_str[j] = '\0';
	return (sub_str);
}
