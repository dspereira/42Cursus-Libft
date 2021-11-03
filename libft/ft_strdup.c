/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:33:23 by dsilveri          #+#    #+#             */
/*   Updated: 2021/11/03 11:33:24 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	len;

	if (!s1)
		return (0);
	len = ft_strlen(s1);
	str = malloc(len * sizeof(char));
	if (!str)
		return (0);
	ft_memcpy(str, s1, len);
	return (str);
}
