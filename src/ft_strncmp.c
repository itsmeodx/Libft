/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouaadic <oouaadic@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:24:39 by oouaadic          #+#    #+#             */
/*   Updated: 2024/09/18 12:07:09 by oouaadic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n && (s1[i] != 0 || s2[i] != 0))
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = -1;
	while (s1[++i] && s2[i])
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	ft_strcasecmp(const char *s1, const char *s2)
{
	size_t	i;

	i = -1;
	while (s1[++i] && s2[i])
		if (ft_tolower(s1[i]) != ft_tolower(s2[i]))
			return ((unsigned char)ft_tolower(s1[i])
				- (unsigned char)ft_tolower(s2[i]));
	return ((unsigned char)ft_tolower(s1[i])
		- (unsigned char)ft_tolower(s2[i]));
}
