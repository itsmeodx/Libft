/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouaadic <oouaadic@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 08:32:32 by oouaadic          #+#    #+#             */
/*   Updated: 2025/02/26 22:01:46 by oouaadic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)

{
	char	*str;
	size_t	total_len;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	total_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)malloc(total_len * sizeof(char));
	if (!str)
		return (NULL);
	while (*s1)
		*str++ = *s1++;
	while (*s2)
		*str++ = *s2++;
	*str = 0;
	return (str - total_len + 1);
}

char	*ft_strsjoin(char **strs)
{
	char	*str;
	size_t	total_len;
	size_t	i;
	size_t	j;
	size_t	k;

	if (!strs || !*strs)
		return (NULL);
	total_len = 0;
	i = -1;
	while (strs[++i])
		total_len += ft_strlen(strs[i]);
	str = malloc((total_len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = -1;
	k = -1;
	while (strs[++i])
	{
		j = -1;
		while (strs[i][++j])
			str[++k] = strs[i][j];
	}
	str[++k] = 0;
	return (str);
}
