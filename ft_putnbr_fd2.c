/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmittelb <mmittelb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 17:57:26 by mmittelb          #+#    #+#             */
/*   Updated: 2025/06/19 18:18:52 by mmittelb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd2(int n, int fd)
{
	long	num;

	num = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		num = -num;
	}
	if (num >= 10)
		ft_putnbr_fd2((num / 10), fd);
	ft_putchar_fd((num % 10) + '0', fd);
}
/*
int main(void)
{
    ft_putnbr_fd2(12345, 1);
    write(1, "\n", 1); // Neue Zeile für Übersichtlichkeit
    return 0;
}
*/