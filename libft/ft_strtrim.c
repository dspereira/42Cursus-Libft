/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:34:14 by dsilveri          #+#    #+#             */
/*   Updated: 2021/11/03 11:34:14 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);

size_t	get_index(char const *s1, char const *set, size_t start, int direction)
{
	int	i;

	i = start;
	while (ft_strchr(set, s1[i]))
		i += direction;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i_start;
	size_t	i_end;

	if (!s1 || !set)
		return (0);
	i_start = get_index(s1, set, 0, 1);
	i_end = get_index(s1, set, (ft_strlen(s1) - 1), -1);
	return (ft_substr(s1, i_start, (i_end - i_start) + 1));
}
