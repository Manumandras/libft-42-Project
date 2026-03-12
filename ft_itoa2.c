/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmittelb <mmittelb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 17:59:40 by mmittelb          #+#    #+#             */
/*   Updated: 2025/06/19 18:23:00 by mmittelb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_len(long n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa2(int n)
{
	long	num;
	char	*result_str;
	size_t	len;

	num = n;
	len = get_len(num);
	result_str = malloc(len + 1);
	if (!result_str)
		return (NULL);
	result_str[len] = '\0';
	if (num < 0)
	{
		result_str[0] = '-';
		num = -num;
	}
	if (n == 0)
		result_str[0] = '0';
	while (num > 0)
	{
		len--;
		result_str[len] = (num % 10) + 48;
		num = num / 10;
	}
	return (result_str);
}
/*
#include <stdio.h>   // for printf
#include <stdlib.h>  // for free

char *ft_itoa2(int n); // forward declaration if not included via libft.h

int main(void)
{
    int test_num = -12345;
    char *str = ft_itoa2(test_num);

    if (str)
    {
        printf("Converted number: %s\n", str);
        free(str);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }
    return 0;
}
*/