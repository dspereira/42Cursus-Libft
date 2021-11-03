/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:32:38 by dsilveri          #+#    #+#             */
/*   Updated: 2021/11/03 11:32:38 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	n -= 1;
	while (n != 0)
	{
		((char *) dst)[n] = ((char *) src)[n];
		n--;
	}
	((char *) dst)[n] = ((char *) src)[n];
	return (dst);
}
