/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmittelb <mmittelb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:50:15 by mmittelb          #+#    #+#             */
/*   Updated: 2025/06/10 11:24:14 by mmittelb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptrs;
	unsigned char	first_instance;

	ptrs = (unsigned char *)s;
	first_instance = (unsigned char)c;
	while (n--)
	{
		if (*ptrs == first_instance)
			return ((void *)ptrs);
		ptrs++;
	}
	return (NULL);
}
