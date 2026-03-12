/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmittelb <mmittelb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 11:47:01 by mmittelb          #+#    #+#             */
/*   Updated: 2025/06/10 11:21:50 by mmittelb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_swap(char *str, long length)
{
	int		j;
	int		lengthorigin;
	char	store;

	lengthorigin = length;
	length = length - 1;
	j = 0;
	while (length > j)
	{
		store = str[j];
		str[j] = str[length];
		str[length] = store;
		j++;
		length--;
	}
	str[lengthorigin] = '\0';
	return (str);
}

static long int	ft_digamount(long int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		count = count + 1;
	}
	return (count);
}

static char	*ft_putminus(char *str, int length)
{
	while (length >= 0)
	{
		str[length + 1] = str[length];
		length--;
	}
	str[0] = 45;
	return (str);
}

static char	*ft_iszeronull(char *ptr)
{
	if (ptr == NULL)
		return (NULL);
	ptr[0] = 48;
	ptr[1] = '\0';
	return (ptr);
}

char	*ft_itoa(int n)
{
	char		*ptr;
	long int	nl;
	int			i;
	int			sign;

	nl = n;
	i = 0;
	sign = 0;
	if (nl < 0)
	{
		nl = nl * -1;
		sign = 1;
	}
	ptr = (char *)malloc(sizeof(char) * (ft_digamount(nl) + 1 + sign));
	if (nl == 0 || ptr == NULL)
		return (ft_iszeronull(ptr));
	while (nl > 0)
	{
		ptr[i++] = (nl % 10) + 48;
		nl = nl / 10;
	}
	ptr = ft_swap(ptr, i);
	if (sign == 1)
		ptr = ft_putminus(ptr, i);
	return (ptr);
}
