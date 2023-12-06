/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouaadic <oouaadic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:45:52 by oouaadic          #+#    #+#             */
/*   Updated: 2023/12/02 17:20:46 by oouaadic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	m;

	if (fd < 0)
		return ;
	m = (long)n;
	if (m < 0)
	{
		ft_putchar_fd('-', fd);
		m = -m;
	}
	if (m >= 10)
		ft_putnbr_fd(m / 10, fd);
	ft_putchar_fd('0' + m % 10, fd);
}
