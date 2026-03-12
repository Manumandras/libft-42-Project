/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmittelb <mmittelb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 12:38:13 by mmittelb          #+#    #+#             */
/*   Updated: 2025/06/10 11:19:15 by mmittelb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countforward(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;
	size_t	countf;

	i = 0;
	countf = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (set[j] == s1[i])
			{
				countf = countf + 1;
				break ;
			}
			j++;
		}
		if (set[j] != s1[i])
			break ;
		i++;
	}
	return (countf);
}

static size_t	ft_countback(const char *s1, const char *set,
	size_t strlen, size_t countf)
{
	size_t	j;
	size_t	countb;

	countb = 0;
	while (strlen > countf)
	{
		j = 0;
		while (set[j])
		{
			if (set[j] == s1[strlen])
			{
				countb = countb + 1;
				break ;
			}
			j++;
		}
		if (set[j] != s1[strlen])
			break ;
		strlen--;
	}
	return (countb);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	countf;
	size_t	countb;
	size_t	i;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	countf = ft_countforward(s1, set);
	countb = ft_countback(s1, set, ft_strlen(s1), countf);
	ptr = (char *)malloc
		(sizeof(char) * ((ft_strlen(s1) + 1) - (countb + countf)));
	if (!ptr)
		return (NULL);
	i = 0;
	while (countf < (ft_strlen(s1) - countb))
	{
		ptr[i] = s1[countf];
		i++;
		countf++;
	}
	ptr[i] = '\0';
	return (ptr);
}
