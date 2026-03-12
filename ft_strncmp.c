/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmittelb <mmittelb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:32:26 by mmittelb          #+#    #+#             */
/*   Updated: 2025/06/10 11:19:30 by mmittelb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)

{
	size_t				i;
	const unsigned char	*s1u;
	const unsigned char	*s2u;

	s1u = (const unsigned char *)s1;
	s2u = (const unsigned char *)s2;
	i = 0;
	while ((s1u[i] != '\0' || s2u[i] != '\0') && i < n)
	{
		if (s1u[i] == s2u[i])
			i++;
		else if (s1u[i] != s2u[i])
			return (s1u[i] - s2u[i]);
	}
	return (0);
}
