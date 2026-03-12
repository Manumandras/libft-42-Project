/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmittelb <mmittelb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 16:16:01 by mmittelb          #+#    #+#             */
/*   Updated: 2025/06/10 11:20:28 by mmittelb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_recurs(long int l, int fd)
{
	if (l > 0)
	{
		ft_recurs(l / 10, fd);
		l = l % 10 + 48;
		write(fd, &l, 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	long int	l;

	l = n;
	if (l == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (l < 0)
	{
		l = l * -1;
		write(fd, "-", 1);
	}
	ft_recurs(l, fd);
}
