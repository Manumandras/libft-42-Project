/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmittelb <mmittelb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:30:46 by mmittelb          #+#    #+#             */
/*   Updated: 2025/06/10 11:19:24 by mmittelb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[j] == '\0')
		return ((char *)&big[i]);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i] == little[j] && i < len)
		{
			j++;
			i++;
			if (little[j] == '\0')
			{
				return ((char *)&big[i - j]);
			}
		}
		i = i - j;
		i++;
	}
	return (NULL);
}
