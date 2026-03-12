/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmittelb <mmittelb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:55:47 by mmittelb          #+#    #+#             */
/*   Updated: 2025/06/10 11:25:22 by mmittelb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ptrd;
	const unsigned char	*ptrs;
	size_t				i;

	ptrd = dest;
	ptrs = src;
	i = 0;
	if (ptrd > ptrs && (ptrd != NULL || ptrs != NULL))
	{
		while (0 < n)
		{
			ptrd[n - 1] = ptrs[n - 1];
			n--;
		}
	}
	else if (ptrd != NULL || ptrs != NULL)
	{
		while (i < n)
		{
			ptrd[i] = ptrs[i];
			i++;
		}
	}
	return (dest);
}
