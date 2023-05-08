/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 14:52:48 by gykoh             #+#    #+#             */
/*   Updated: 2023/05/08 22:23:00 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	ans_idx;
	char	*answer;

	if (!s)
		return (0);
	if (ft_strlen(s) <= (size_t)start)
		return (ft_strdup(""));
	if (ft_strlen(s) < len + start)
		len = ft_strlen(s) - start;
	i = start;
	ans_idx = 0;
	answer = (char *)malloc(sizeof(char) * (len + 1));
	if (!answer)
		return (0);
	while (i < start + len && s[i] != '\0')
	{
		answer[ans_idx] = s[i];
		ans_idx++;
		i++;
	}
	answer[ans_idx] = '\0';
	return (answer);
}
