/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouaadic <oouaadic@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:22:01 by oouaadic          #+#    #+#             */
/*   Updated: 2024/09/18 12:55:37 by oouaadic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	size_t	i;
	char	*dup_str;

	if (!s)
		return (NULL);
	len = 0;
	while (s[len])
		len++;
	dup_str = (char *)malloc(len + 1);
	if (dup_str == NULL)
		return (NULL);
	i = -1;
	while (s[++i])
		dup_str[i] = s[i];
	dup_str[i] = '\0';
	return (dup_str);
}
