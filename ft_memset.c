/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmittelb <mmittelb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 13:39:04 by mmittelb          #+#    #+#             */
/*   Updated: 2025/06/10 11:20:39 by mmittelb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	put;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	put = (unsigned char)c;
	while (i < n)
	{
		ptr[i] = put;
		i++;
	}
	return (s);
}
